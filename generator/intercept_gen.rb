HEADER_DIR = "../ext/CL"
INPUT_FILE = "opencl_dll_exports.txt"

$header_src = ""
Dir["#{HEADER_DIR}/*.h"].each do |fn|
    $header_src += File.read(fn) + "\n"
end

$types_src = "\n"
$global_src = "\n"
$init_src = "void clin_init_orig_funs() {\n"
$fun_src = "\n\n"

CALLBACK_PARAM_REGEX = /(\w+) \(CL_CALLBACK\* (\w+)\)(.*)/
COMMA_NOT_IN_PAREN = / *, *(?=[^\)]*?(?:\(|$))/

def extract_param_name(str)
    if str =~ CALLBACK_PARAM_REGEX
        return $2
    end
    return str.sub(/.*\s(\w+)/, '\1').sub("void", "")
end

def extract_param_type(str)
    if str =~ CALLBACK_PARAM_REGEX
        return "#{$1} (CL_CALLBACK*)#{$3}"
    end
    return str.sub(/(.*)\s(\w+)/, '\1')
end

def generate_fun(funname)
    ignore_deprecated_info = '(:?\s+CL_EXT_PREFIX__VERSION_\d_\d_DEPRECATED)?'
    match_return_type = '(?<ret_type>\w+ ?\*?)'
    match_cc = '(?<calling_convention>\w+)'
    match_args = '\((?<argument_string>.*?)\)'
    fun_regex = /extern\s+CL_API_ENTRY#{ignore_deprecated_info}\s+#{match_return_type}\s+#{match_cc}\s+#{funname}#{match_args} *?\w+?SUFFIX/m;

    m = $header_src.match(fun_regex)
    if m
        ret_type = m.named_captures["ret_type"].gsub(" *", "*")
        calling_convention = m.named_captures["calling_convention"]
        argument_string = m.named_captures["argument_string"]

        if(argument_string =~ /SUFFIX/)
            puts "ERROR in #{funname}"
            exit
        end
        
        parameter_string = argument_string.gsub("/*", "").gsub("*/", "").gsub(/\s+/, " ").strip
        parameter_string = parameter_string.gsub(/\[\d*\]/,"").gsub(" ,", ",").gsub(" *", "*").gsub(" )", ")")
        call_arg_string = parameter_string.split(COMMA_NOT_IN_PAREN).map {|s| extract_param_name(s) }.join(", ")
        param_type_string = parameter_string.split(COMMA_NOT_IN_PAREN).map {|s| extract_param_type(s) }.join(", ")

        type_name = "clin_t_#{funname}"
        orig_name = "clin_o_#{funname}"
        $types_src += "typedef #{ret_type} (*#{type_name})(#{param_type_string});\n"
        $global_src += "#{type_name} #{orig_name} = NULL;\n"
        $init_src += "\t#{orig_name} = (#{type_name})clin_get_orig_fun(\"#{funname}\");\n"
        $fun_src += <<-EOS
        #ifndef CLIN_CUSTOM_#{funname}
        CLIN_ENTRY #{ret_type} #{calling_convention} #{funname}(#{parameter_string}) {
            CLIN_LOG("#{funname}");
            #{ret_type=="void" ? "" : "return "}#{orig_name}(#{call_arg_string});
        }
        #endif
        
        EOS
    else
        puts "Could not find API function #{funname} in expected format in CL headers"
    end
end


exports = File.read(INPUT_FILE)
funnames = exports.scan(/\s+cl\w+\s+/m).map { |s| s.strip }

funnames.each do |funname|
    generate_fun(funname)
end

$global_src += "\n"
$init_src += "}\n"

File.open("generated.h", "w+") { |of|
    of.puts "// Automatically generated code\n"
    of.puts $types_src
    of.puts $global_src
    of.puts $init_src
    of.puts $fun_src.gsub("        ", "")
}

