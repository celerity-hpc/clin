// Automatically generated code

typedef cl_int (*clin_t_clBuildProgram)(cl_program, cl_uint, const cl_device_id*, const char*, void (CL_CALLBACK*)(cl_program program, void* user_data), void*);
typedef cl_kernel (*clin_t_clCloneKernel)(cl_kernel, cl_int*);
typedef cl_int (*clin_t_clCompileProgram)(cl_program, cl_uint, const cl_device_id*, const char*, cl_uint, const cl_program*, const char**, void (CL_CALLBACK*)(cl_program program, void* user_data), void*);
typedef cl_mem (*clin_t_clCreateBuffer)(cl_context, cl_mem_flags, size_t, void*, cl_int*);
typedef cl_command_queue (*clin_t_clCreateCommandQueue)(cl_context, cl_device_id, cl_command_queue_properties, cl_int*);
typedef cl_command_queue (*clin_t_clCreateCommandQueueWithProperties)(cl_context, cl_device_id, const cl_queue_properties*, cl_int*);
typedef cl_context (*clin_t_clCreateContext)(const cl_context_properties*, cl_uint, const cl_device_id*, void (CL_CALLBACK*)(const char*, const void*, size_t, void*), void*, cl_int*);
typedef cl_context (*clin_t_clCreateContextFromType)(const cl_context_properties*, cl_device_type, void (CL_CALLBACK*)(const char*, const void*, size_t, void*), void*, cl_int*);
typedef cl_mem (*clin_t_clCreateFromGLBuffer)(cl_context, cl_mem_flags, cl_GLuint, int*);
typedef cl_mem (*clin_t_clCreateFromGLRenderbuffer)(cl_context, cl_mem_flags, cl_GLuint, cl_int*);
typedef cl_mem (*clin_t_clCreateFromGLTexture)(cl_context, cl_mem_flags, cl_GLenum, cl_GLint, cl_GLuint, cl_int*);
typedef cl_mem (*clin_t_clCreateFromGLTexture2D)(cl_context, cl_mem_flags, cl_GLenum, cl_GLint, cl_GLuint, cl_int*);
typedef cl_mem (*clin_t_clCreateFromGLTexture3D)(cl_context, cl_mem_flags, cl_GLenum, cl_GLint, cl_GLuint, cl_int*);
typedef cl_mem (*clin_t_clCreateImage)(cl_context, cl_mem_flags, const cl_image_format*, const cl_image_desc*, void*, cl_int*);
typedef cl_mem (*clin_t_clCreateImage2D)(cl_context, cl_mem_flags, const cl_image_format*, size_t, size_t, size_t, void*, cl_int*);
typedef cl_mem (*clin_t_clCreateImage3D)(cl_context, cl_mem_flags, const cl_image_format*, size_t, size_t, size_t, size_t, size_t, void*, cl_int*);
typedef cl_kernel (*clin_t_clCreateKernel)(cl_program, const char*, cl_int*);
typedef cl_int (*clin_t_clCreateKernelsInProgram)(cl_program, cl_uint, cl_kernel*, cl_uint*);
typedef cl_mem (*clin_t_clCreatePipe)(cl_context, cl_mem_flags, cl_uint, cl_uint, const cl_pipe_properties*, cl_int*);
typedef cl_program (*clin_t_clCreateProgramWithBinary)(cl_context, cl_uint, const cl_device_id*, const size_t*, const unsigned char**, cl_int*, cl_int*);
typedef cl_program (*clin_t_clCreateProgramWithBuiltInKernels)(cl_context, cl_uint, const cl_device_id*, const char*, cl_int*);
typedef cl_program (*clin_t_clCreateProgramWithIL)(cl_context, const void*, size_t, cl_int*);
typedef cl_program (*clin_t_clCreateProgramWithSource)(cl_context, cl_uint, const char**, const size_t*, cl_int*);
typedef cl_sampler (*clin_t_clCreateSampler)(cl_context, cl_bool, cl_addressing_mode, cl_filter_mode, cl_int*);
typedef cl_sampler (*clin_t_clCreateSamplerWithProperties)(cl_context, const cl_sampler_properties*, cl_int*);
typedef cl_mem (*clin_t_clCreateSubBuffer)(cl_mem, cl_mem_flags, cl_buffer_create_type, const void*, cl_int*);
typedef cl_int (*clin_t_clCreateSubDevices)(cl_device_id, const cl_device_partition_property*, cl_uint, cl_device_id*, cl_uint*);
typedef cl_event (*clin_t_clCreateUserEvent)(cl_context, cl_int*);
typedef cl_int (*clin_t_clEnqueueAcquireGLObjects)(cl_command_queue, cl_uint, const cl_mem*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueBarrier)(cl_command_queue);
typedef cl_int (*clin_t_clEnqueueBarrierWithWaitList)(cl_command_queue, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueCopyBuffer)(cl_command_queue, cl_mem, cl_mem, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueCopyBufferRect)(cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueCopyBufferToImage)(cl_command_queue, cl_mem, cl_mem, size_t, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueCopyImage)(cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueCopyImageToBuffer)(cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueFillBuffer)(cl_command_queue, cl_mem, const void*, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueFillImage)(cl_command_queue, cl_mem, const void*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef void* (*clin_t_clEnqueueMapBuffer)(cl_command_queue, cl_mem, cl_bool, cl_map_flags, size_t, size_t, cl_uint, const cl_event*, cl_event*, cl_int*);
typedef void* (*clin_t_clEnqueueMapImage)(cl_command_queue, cl_mem, cl_bool, cl_map_flags, const size_t*, const size_t*, size_t*, size_t*, cl_uint, const cl_event*, cl_event*, cl_int*);
typedef cl_int (*clin_t_clEnqueueMarker)(cl_command_queue, cl_event*);
typedef cl_int (*clin_t_clEnqueueMarkerWithWaitList)(cl_command_queue, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueMigrateMemObjects)(cl_command_queue, cl_uint, const cl_mem*, cl_mem_migration_flags, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueNDRangeKernel)(cl_command_queue, cl_kernel, cl_uint, const size_t*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueNativeKernel)(cl_command_queue, void (CL_CALLBACK*)(void*), void*, size_t, cl_uint, const cl_mem*, const void**, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueReadBuffer)(cl_command_queue, cl_mem, cl_bool, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueReadBufferRect)(cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueReadImage)(cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueReleaseGLObjects)(cl_command_queue, cl_uint, const cl_mem*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMFree)(cl_command_queue, cl_uint, void*, void (CL_CALLBACK*)(cl_command_queue queue, cl_uint num_svm_pointers, void* svm_pointers, void* user_data), void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMMap)(cl_command_queue, cl_bool, cl_map_flags, void*, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMMemFill)(cl_command_queue, void*, const void*, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMMemcpy)(cl_command_queue, cl_bool, void*, const void*, size_t, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMMigrateMem)(cl_command_queue, cl_uint, const void**, const size_t*, cl_mem_migration_flags, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueSVMUnmap)(cl_command_queue, void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueTask)(cl_command_queue, cl_kernel, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueUnmapMemObject)(cl_command_queue, cl_mem, void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueWaitForEvents)(cl_command_queue, cl_uint, const cl_event*);
typedef cl_int (*clin_t_clEnqueueWriteBuffer)(cl_command_queue, cl_mem, cl_bool, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueWriteBufferRect)(cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clEnqueueWriteImage)(cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef cl_int (*clin_t_clFinish)(cl_command_queue);
typedef cl_int (*clin_t_clFlush)(cl_command_queue);
typedef cl_int (*clin_t_clGetCommandQueueInfo)(cl_command_queue, cl_command_queue_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetContextInfo)(cl_context, cl_context_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetDeviceAndHostTimer)(cl_device_id, cl_ulong*, cl_ulong*);
typedef cl_int (*clin_t_clGetDeviceIDs)(cl_platform_id, cl_device_type, cl_uint, cl_device_id*, cl_uint*);
typedef cl_int (*clin_t_clGetDeviceInfo)(cl_device_id, cl_device_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetEventInfo)(cl_event, cl_event_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetEventProfilingInfo)(cl_event, cl_profiling_info, size_t, void*, size_t*);
typedef void* (*clin_t_clGetExtensionFunctionAddress)(const char*);
typedef void* (*clin_t_clGetExtensionFunctionAddressForPlatform)(cl_platform_id, const char*);
typedef cl_int (*clin_t_clGetGLObjectInfo)(cl_mem, cl_gl_object_type*, cl_GLuint*);
typedef cl_int (*clin_t_clGetGLTextureInfo)(cl_mem, cl_gl_texture_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetHostTimer)(cl_device_id, cl_ulong*);
typedef cl_int (*clin_t_clGetImageInfo)(cl_mem, cl_image_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetKernelArgInfo)(cl_kernel, cl_uint, cl_kernel_arg_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetKernelInfo)(cl_kernel, cl_kernel_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetKernelSubGroupInfo)(cl_kernel, cl_device_id, cl_kernel_sub_group_info, size_t, const void*, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetKernelWorkGroupInfo)(cl_kernel, cl_device_id, cl_kernel_work_group_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetMemObjectInfo)(cl_mem, cl_mem_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetPipeInfo)(cl_mem, cl_pipe_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetPlatformIDs)(cl_uint, cl_platform_id*, cl_uint*);
typedef cl_int (*clin_t_clGetPlatformInfo)(cl_platform_id, cl_platform_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetProgramBuildInfo)(cl_program, cl_device_id, cl_program_build_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetProgramInfo)(cl_program, cl_program_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetSamplerInfo)(cl_sampler, cl_sampler_info, size_t, void*, size_t*);
typedef cl_int (*clin_t_clGetSupportedImageFormats)(cl_context, cl_mem_flags, cl_mem_object_type, cl_uint, cl_image_format*, cl_uint*);
typedef cl_program (*clin_t_clLinkProgram)(cl_context, cl_uint, const cl_device_id*, const char*, cl_uint, const cl_program*, void (CL_CALLBACK*)(cl_program program, void* user_data), void*, cl_int*);
typedef cl_int (*clin_t_clReleaseCommandQueue)(cl_command_queue);
typedef cl_int (*clin_t_clReleaseContext)(cl_context);
typedef cl_int (*clin_t_clReleaseDevice)(cl_device_id);
typedef cl_int (*clin_t_clReleaseEvent)(cl_event);
typedef cl_int (*clin_t_clReleaseKernel)(cl_kernel);
typedef cl_int (*clin_t_clReleaseMemObject)(cl_mem);
typedef cl_int (*clin_t_clReleaseProgram)(cl_program);
typedef cl_int (*clin_t_clReleaseSampler)(cl_sampler);
typedef cl_int (*clin_t_clRetainCommandQueue)(cl_command_queue);
typedef cl_int (*clin_t_clRetainContext)(cl_context);
typedef cl_int (*clin_t_clRetainDevice)(cl_device_id);
typedef cl_int (*clin_t_clRetainEvent)(cl_event);
typedef cl_int (*clin_t_clRetainKernel)(cl_kernel);
typedef cl_int (*clin_t_clRetainMemObject)(cl_mem);
typedef cl_int (*clin_t_clRetainProgram)(cl_program);
typedef cl_int (*clin_t_clRetainSampler)(cl_sampler);
typedef void* (*clin_t_clSVMAlloc)(cl_context, cl_svm_mem_flags, size_t, cl_uint);
typedef void (*clin_t_clSVMFree)(cl_context, void*);
typedef cl_int (*clin_t_clSetCommandQueueProperty)(cl_command_queue, cl_command_queue_properties, cl_bool, cl_command_queue_properties*);
typedef cl_int (*clin_t_clSetDefaultDeviceCommandQueue)(cl_context, cl_device_id, cl_command_queue);
typedef cl_int (*clin_t_clSetEventCallback)(cl_event, cl_int, void (CL_CALLBACK*)(cl_event, cl_int, void*), void*);
typedef cl_int (*clin_t_clSetKernelArg)(cl_kernel, cl_uint, size_t, const void*);
typedef cl_int (*clin_t_clSetKernelArgSVMPointer)(cl_kernel, cl_uint, const void*);
typedef cl_int (*clin_t_clSetKernelExecInfo)(cl_kernel, cl_kernel_exec_info, size_t, const void*);
typedef cl_int (*clin_t_clSetMemObjectDestructorCallback)(cl_mem, void (CL_CALLBACK*)( cl_mem memobj, void* user_data), void*);
typedef cl_int (*clin_t_clSetProgramReleaseCallback)(cl_program, void (CL_CALLBACK*)(cl_program program, void* user_data), void*);
typedef cl_int (*clin_t_clSetProgramSpecializationConstant)(cl_program, cl_uint, size_t, const void*);
typedef cl_int (*clin_t_clSetUserEventStatus)(cl_event, cl_int);
typedef cl_int (*clin_t_clUnloadCompiler)(void);
typedef cl_int (*clin_t_clUnloadPlatformCompiler)(cl_platform_id);
typedef cl_int (*clin_t_clWaitForEvents)(cl_uint, const cl_event*);

clin_t_clBuildProgram clin_o_clBuildProgram = NULL;
clin_t_clCloneKernel clin_o_clCloneKernel = NULL;
clin_t_clCompileProgram clin_o_clCompileProgram = NULL;
clin_t_clCreateBuffer clin_o_clCreateBuffer = NULL;
clin_t_clCreateCommandQueue clin_o_clCreateCommandQueue = NULL;
clin_t_clCreateCommandQueueWithProperties clin_o_clCreateCommandQueueWithProperties = NULL;
clin_t_clCreateContext clin_o_clCreateContext = NULL;
clin_t_clCreateContextFromType clin_o_clCreateContextFromType = NULL;
clin_t_clCreateFromGLBuffer clin_o_clCreateFromGLBuffer = NULL;
clin_t_clCreateFromGLRenderbuffer clin_o_clCreateFromGLRenderbuffer = NULL;
clin_t_clCreateFromGLTexture clin_o_clCreateFromGLTexture = NULL;
clin_t_clCreateFromGLTexture2D clin_o_clCreateFromGLTexture2D = NULL;
clin_t_clCreateFromGLTexture3D clin_o_clCreateFromGLTexture3D = NULL;
clin_t_clCreateImage clin_o_clCreateImage = NULL;
clin_t_clCreateImage2D clin_o_clCreateImage2D = NULL;
clin_t_clCreateImage3D clin_o_clCreateImage3D = NULL;
clin_t_clCreateKernel clin_o_clCreateKernel = NULL;
clin_t_clCreateKernelsInProgram clin_o_clCreateKernelsInProgram = NULL;
clin_t_clCreatePipe clin_o_clCreatePipe = NULL;
clin_t_clCreateProgramWithBinary clin_o_clCreateProgramWithBinary = NULL;
clin_t_clCreateProgramWithBuiltInKernels clin_o_clCreateProgramWithBuiltInKernels = NULL;
clin_t_clCreateProgramWithIL clin_o_clCreateProgramWithIL = NULL;
clin_t_clCreateProgramWithSource clin_o_clCreateProgramWithSource = NULL;
clin_t_clCreateSampler clin_o_clCreateSampler = NULL;
clin_t_clCreateSamplerWithProperties clin_o_clCreateSamplerWithProperties = NULL;
clin_t_clCreateSubBuffer clin_o_clCreateSubBuffer = NULL;
clin_t_clCreateSubDevices clin_o_clCreateSubDevices = NULL;
clin_t_clCreateUserEvent clin_o_clCreateUserEvent = NULL;
clin_t_clEnqueueAcquireGLObjects clin_o_clEnqueueAcquireGLObjects = NULL;
clin_t_clEnqueueBarrier clin_o_clEnqueueBarrier = NULL;
clin_t_clEnqueueBarrierWithWaitList clin_o_clEnqueueBarrierWithWaitList = NULL;
clin_t_clEnqueueCopyBuffer clin_o_clEnqueueCopyBuffer = NULL;
clin_t_clEnqueueCopyBufferRect clin_o_clEnqueueCopyBufferRect = NULL;
clin_t_clEnqueueCopyBufferToImage clin_o_clEnqueueCopyBufferToImage = NULL;
clin_t_clEnqueueCopyImage clin_o_clEnqueueCopyImage = NULL;
clin_t_clEnqueueCopyImageToBuffer clin_o_clEnqueueCopyImageToBuffer = NULL;
clin_t_clEnqueueFillBuffer clin_o_clEnqueueFillBuffer = NULL;
clin_t_clEnqueueFillImage clin_o_clEnqueueFillImage = NULL;
clin_t_clEnqueueMapBuffer clin_o_clEnqueueMapBuffer = NULL;
clin_t_clEnqueueMapImage clin_o_clEnqueueMapImage = NULL;
clin_t_clEnqueueMarker clin_o_clEnqueueMarker = NULL;
clin_t_clEnqueueMarkerWithWaitList clin_o_clEnqueueMarkerWithWaitList = NULL;
clin_t_clEnqueueMigrateMemObjects clin_o_clEnqueueMigrateMemObjects = NULL;
clin_t_clEnqueueNDRangeKernel clin_o_clEnqueueNDRangeKernel = NULL;
clin_t_clEnqueueNativeKernel clin_o_clEnqueueNativeKernel = NULL;
clin_t_clEnqueueReadBuffer clin_o_clEnqueueReadBuffer = NULL;
clin_t_clEnqueueReadBufferRect clin_o_clEnqueueReadBufferRect = NULL;
clin_t_clEnqueueReadImage clin_o_clEnqueueReadImage = NULL;
clin_t_clEnqueueReleaseGLObjects clin_o_clEnqueueReleaseGLObjects = NULL;
clin_t_clEnqueueSVMFree clin_o_clEnqueueSVMFree = NULL;
clin_t_clEnqueueSVMMap clin_o_clEnqueueSVMMap = NULL;
clin_t_clEnqueueSVMMemFill clin_o_clEnqueueSVMMemFill = NULL;
clin_t_clEnqueueSVMMemcpy clin_o_clEnqueueSVMMemcpy = NULL;
clin_t_clEnqueueSVMMigrateMem clin_o_clEnqueueSVMMigrateMem = NULL;
clin_t_clEnqueueSVMUnmap clin_o_clEnqueueSVMUnmap = NULL;
clin_t_clEnqueueTask clin_o_clEnqueueTask = NULL;
clin_t_clEnqueueUnmapMemObject clin_o_clEnqueueUnmapMemObject = NULL;
clin_t_clEnqueueWaitForEvents clin_o_clEnqueueWaitForEvents = NULL;
clin_t_clEnqueueWriteBuffer clin_o_clEnqueueWriteBuffer = NULL;
clin_t_clEnqueueWriteBufferRect clin_o_clEnqueueWriteBufferRect = NULL;
clin_t_clEnqueueWriteImage clin_o_clEnqueueWriteImage = NULL;
clin_t_clFinish clin_o_clFinish = NULL;
clin_t_clFlush clin_o_clFlush = NULL;
clin_t_clGetCommandQueueInfo clin_o_clGetCommandQueueInfo = NULL;
clin_t_clGetContextInfo clin_o_clGetContextInfo = NULL;
clin_t_clGetDeviceAndHostTimer clin_o_clGetDeviceAndHostTimer = NULL;
clin_t_clGetDeviceIDs clin_o_clGetDeviceIDs = NULL;
clin_t_clGetDeviceInfo clin_o_clGetDeviceInfo = NULL;
clin_t_clGetEventInfo clin_o_clGetEventInfo = NULL;
clin_t_clGetEventProfilingInfo clin_o_clGetEventProfilingInfo = NULL;
clin_t_clGetExtensionFunctionAddress clin_o_clGetExtensionFunctionAddress = NULL;
clin_t_clGetExtensionFunctionAddressForPlatform clin_o_clGetExtensionFunctionAddressForPlatform = NULL;
clin_t_clGetGLObjectInfo clin_o_clGetGLObjectInfo = NULL;
clin_t_clGetGLTextureInfo clin_o_clGetGLTextureInfo = NULL;
clin_t_clGetHostTimer clin_o_clGetHostTimer = NULL;
clin_t_clGetImageInfo clin_o_clGetImageInfo = NULL;
clin_t_clGetKernelArgInfo clin_o_clGetKernelArgInfo = NULL;
clin_t_clGetKernelInfo clin_o_clGetKernelInfo = NULL;
clin_t_clGetKernelSubGroupInfo clin_o_clGetKernelSubGroupInfo = NULL;
clin_t_clGetKernelWorkGroupInfo clin_o_clGetKernelWorkGroupInfo = NULL;
clin_t_clGetMemObjectInfo clin_o_clGetMemObjectInfo = NULL;
clin_t_clGetPipeInfo clin_o_clGetPipeInfo = NULL;
clin_t_clGetPlatformIDs clin_o_clGetPlatformIDs = NULL;
clin_t_clGetPlatformInfo clin_o_clGetPlatformInfo = NULL;
clin_t_clGetProgramBuildInfo clin_o_clGetProgramBuildInfo = NULL;
clin_t_clGetProgramInfo clin_o_clGetProgramInfo = NULL;
clin_t_clGetSamplerInfo clin_o_clGetSamplerInfo = NULL;
clin_t_clGetSupportedImageFormats clin_o_clGetSupportedImageFormats = NULL;
clin_t_clLinkProgram clin_o_clLinkProgram = NULL;
clin_t_clReleaseCommandQueue clin_o_clReleaseCommandQueue = NULL;
clin_t_clReleaseContext clin_o_clReleaseContext = NULL;
clin_t_clReleaseDevice clin_o_clReleaseDevice = NULL;
clin_t_clReleaseEvent clin_o_clReleaseEvent = NULL;
clin_t_clReleaseKernel clin_o_clReleaseKernel = NULL;
clin_t_clReleaseMemObject clin_o_clReleaseMemObject = NULL;
clin_t_clReleaseProgram clin_o_clReleaseProgram = NULL;
clin_t_clReleaseSampler clin_o_clReleaseSampler = NULL;
clin_t_clRetainCommandQueue clin_o_clRetainCommandQueue = NULL;
clin_t_clRetainContext clin_o_clRetainContext = NULL;
clin_t_clRetainDevice clin_o_clRetainDevice = NULL;
clin_t_clRetainEvent clin_o_clRetainEvent = NULL;
clin_t_clRetainKernel clin_o_clRetainKernel = NULL;
clin_t_clRetainMemObject clin_o_clRetainMemObject = NULL;
clin_t_clRetainProgram clin_o_clRetainProgram = NULL;
clin_t_clRetainSampler clin_o_clRetainSampler = NULL;
clin_t_clSVMAlloc clin_o_clSVMAlloc = NULL;
clin_t_clSVMFree clin_o_clSVMFree = NULL;
clin_t_clSetCommandQueueProperty clin_o_clSetCommandQueueProperty = NULL;
clin_t_clSetDefaultDeviceCommandQueue clin_o_clSetDefaultDeviceCommandQueue = NULL;
clin_t_clSetEventCallback clin_o_clSetEventCallback = NULL;
clin_t_clSetKernelArg clin_o_clSetKernelArg = NULL;
clin_t_clSetKernelArgSVMPointer clin_o_clSetKernelArgSVMPointer = NULL;
clin_t_clSetKernelExecInfo clin_o_clSetKernelExecInfo = NULL;
clin_t_clSetMemObjectDestructorCallback clin_o_clSetMemObjectDestructorCallback = NULL;
clin_t_clSetProgramReleaseCallback clin_o_clSetProgramReleaseCallback = NULL;
clin_t_clSetProgramSpecializationConstant clin_o_clSetProgramSpecializationConstant = NULL;
clin_t_clSetUserEventStatus clin_o_clSetUserEventStatus = NULL;
clin_t_clUnloadCompiler clin_o_clUnloadCompiler = NULL;
clin_t_clUnloadPlatformCompiler clin_o_clUnloadPlatformCompiler = NULL;
clin_t_clWaitForEvents clin_o_clWaitForEvents = NULL;

void clin_init_orig_funs() {
	clin_o_clBuildProgram = clin_get_orig_fun("clBuildProgram");
	clin_o_clCloneKernel = clin_get_orig_fun("clCloneKernel");
	clin_o_clCompileProgram = clin_get_orig_fun("clCompileProgram");
	clin_o_clCreateBuffer = clin_get_orig_fun("clCreateBuffer");
	clin_o_clCreateCommandQueue = clin_get_orig_fun("clCreateCommandQueue");
	clin_o_clCreateCommandQueueWithProperties = clin_get_orig_fun("clCreateCommandQueueWithProperties");
	clin_o_clCreateContext = clin_get_orig_fun("clCreateContext");
	clin_o_clCreateContextFromType = clin_get_orig_fun("clCreateContextFromType");
	clin_o_clCreateFromGLBuffer = clin_get_orig_fun("clCreateFromGLBuffer");
	clin_o_clCreateFromGLRenderbuffer = clin_get_orig_fun("clCreateFromGLRenderbuffer");
	clin_o_clCreateFromGLTexture = clin_get_orig_fun("clCreateFromGLTexture");
	clin_o_clCreateFromGLTexture2D = clin_get_orig_fun("clCreateFromGLTexture2D");
	clin_o_clCreateFromGLTexture3D = clin_get_orig_fun("clCreateFromGLTexture3D");
	clin_o_clCreateImage = clin_get_orig_fun("clCreateImage");
	clin_o_clCreateImage2D = clin_get_orig_fun("clCreateImage2D");
	clin_o_clCreateImage3D = clin_get_orig_fun("clCreateImage3D");
	clin_o_clCreateKernel = clin_get_orig_fun("clCreateKernel");
	clin_o_clCreateKernelsInProgram = clin_get_orig_fun("clCreateKernelsInProgram");
	clin_o_clCreatePipe = clin_get_orig_fun("clCreatePipe");
	clin_o_clCreateProgramWithBinary = clin_get_orig_fun("clCreateProgramWithBinary");
	clin_o_clCreateProgramWithBuiltInKernels = clin_get_orig_fun("clCreateProgramWithBuiltInKernels");
	clin_o_clCreateProgramWithIL = clin_get_orig_fun("clCreateProgramWithIL");
	clin_o_clCreateProgramWithSource = clin_get_orig_fun("clCreateProgramWithSource");
	clin_o_clCreateSampler = clin_get_orig_fun("clCreateSampler");
	clin_o_clCreateSamplerWithProperties = clin_get_orig_fun("clCreateSamplerWithProperties");
	clin_o_clCreateSubBuffer = clin_get_orig_fun("clCreateSubBuffer");
	clin_o_clCreateSubDevices = clin_get_orig_fun("clCreateSubDevices");
	clin_o_clCreateUserEvent = clin_get_orig_fun("clCreateUserEvent");
	clin_o_clEnqueueAcquireGLObjects = clin_get_orig_fun("clEnqueueAcquireGLObjects");
	clin_o_clEnqueueBarrier = clin_get_orig_fun("clEnqueueBarrier");
	clin_o_clEnqueueBarrierWithWaitList = clin_get_orig_fun("clEnqueueBarrierWithWaitList");
	clin_o_clEnqueueCopyBuffer = clin_get_orig_fun("clEnqueueCopyBuffer");
	clin_o_clEnqueueCopyBufferRect = clin_get_orig_fun("clEnqueueCopyBufferRect");
	clin_o_clEnqueueCopyBufferToImage = clin_get_orig_fun("clEnqueueCopyBufferToImage");
	clin_o_clEnqueueCopyImage = clin_get_orig_fun("clEnqueueCopyImage");
	clin_o_clEnqueueCopyImageToBuffer = clin_get_orig_fun("clEnqueueCopyImageToBuffer");
	clin_o_clEnqueueFillBuffer = clin_get_orig_fun("clEnqueueFillBuffer");
	clin_o_clEnqueueFillImage = clin_get_orig_fun("clEnqueueFillImage");
	clin_o_clEnqueueMapBuffer = clin_get_orig_fun("clEnqueueMapBuffer");
	clin_o_clEnqueueMapImage = clin_get_orig_fun("clEnqueueMapImage");
	clin_o_clEnqueueMarker = clin_get_orig_fun("clEnqueueMarker");
	clin_o_clEnqueueMarkerWithWaitList = clin_get_orig_fun("clEnqueueMarkerWithWaitList");
	clin_o_clEnqueueMigrateMemObjects = clin_get_orig_fun("clEnqueueMigrateMemObjects");
	clin_o_clEnqueueNDRangeKernel = clin_get_orig_fun("clEnqueueNDRangeKernel");
	clin_o_clEnqueueNativeKernel = clin_get_orig_fun("clEnqueueNativeKernel");
	clin_o_clEnqueueReadBuffer = clin_get_orig_fun("clEnqueueReadBuffer");
	clin_o_clEnqueueReadBufferRect = clin_get_orig_fun("clEnqueueReadBufferRect");
	clin_o_clEnqueueReadImage = clin_get_orig_fun("clEnqueueReadImage");
	clin_o_clEnqueueReleaseGLObjects = clin_get_orig_fun("clEnqueueReleaseGLObjects");
	clin_o_clEnqueueSVMFree = clin_get_orig_fun("clEnqueueSVMFree");
	clin_o_clEnqueueSVMMap = clin_get_orig_fun("clEnqueueSVMMap");
	clin_o_clEnqueueSVMMemFill = clin_get_orig_fun("clEnqueueSVMMemFill");
	clin_o_clEnqueueSVMMemcpy = clin_get_orig_fun("clEnqueueSVMMemcpy");
	clin_o_clEnqueueSVMMigrateMem = clin_get_orig_fun("clEnqueueSVMMigrateMem");
	clin_o_clEnqueueSVMUnmap = clin_get_orig_fun("clEnqueueSVMUnmap");
	clin_o_clEnqueueTask = clin_get_orig_fun("clEnqueueTask");
	clin_o_clEnqueueUnmapMemObject = clin_get_orig_fun("clEnqueueUnmapMemObject");
	clin_o_clEnqueueWaitForEvents = clin_get_orig_fun("clEnqueueWaitForEvents");
	clin_o_clEnqueueWriteBuffer = clin_get_orig_fun("clEnqueueWriteBuffer");
	clin_o_clEnqueueWriteBufferRect = clin_get_orig_fun("clEnqueueWriteBufferRect");
	clin_o_clEnqueueWriteImage = clin_get_orig_fun("clEnqueueWriteImage");
	clin_o_clFinish = clin_get_orig_fun("clFinish");
	clin_o_clFlush = clin_get_orig_fun("clFlush");
	clin_o_clGetCommandQueueInfo = clin_get_orig_fun("clGetCommandQueueInfo");
	clin_o_clGetContextInfo = clin_get_orig_fun("clGetContextInfo");
	clin_o_clGetDeviceAndHostTimer = clin_get_orig_fun("clGetDeviceAndHostTimer");
	clin_o_clGetDeviceIDs = clin_get_orig_fun("clGetDeviceIDs");
	clin_o_clGetDeviceInfo = clin_get_orig_fun("clGetDeviceInfo");
	clin_o_clGetEventInfo = clin_get_orig_fun("clGetEventInfo");
	clin_o_clGetEventProfilingInfo = clin_get_orig_fun("clGetEventProfilingInfo");
	clin_o_clGetExtensionFunctionAddress = clin_get_orig_fun("clGetExtensionFunctionAddress");
	clin_o_clGetExtensionFunctionAddressForPlatform = clin_get_orig_fun("clGetExtensionFunctionAddressForPlatform");
	clin_o_clGetGLObjectInfo = clin_get_orig_fun("clGetGLObjectInfo");
	clin_o_clGetGLTextureInfo = clin_get_orig_fun("clGetGLTextureInfo");
	clin_o_clGetHostTimer = clin_get_orig_fun("clGetHostTimer");
	clin_o_clGetImageInfo = clin_get_orig_fun("clGetImageInfo");
	clin_o_clGetKernelArgInfo = clin_get_orig_fun("clGetKernelArgInfo");
	clin_o_clGetKernelInfo = clin_get_orig_fun("clGetKernelInfo");
	clin_o_clGetKernelSubGroupInfo = clin_get_orig_fun("clGetKernelSubGroupInfo");
	clin_o_clGetKernelWorkGroupInfo = clin_get_orig_fun("clGetKernelWorkGroupInfo");
	clin_o_clGetMemObjectInfo = clin_get_orig_fun("clGetMemObjectInfo");
	clin_o_clGetPipeInfo = clin_get_orig_fun("clGetPipeInfo");
	clin_o_clGetPlatformIDs = clin_get_orig_fun("clGetPlatformIDs");
	clin_o_clGetPlatformInfo = clin_get_orig_fun("clGetPlatformInfo");
	clin_o_clGetProgramBuildInfo = clin_get_orig_fun("clGetProgramBuildInfo");
	clin_o_clGetProgramInfo = clin_get_orig_fun("clGetProgramInfo");
	clin_o_clGetSamplerInfo = clin_get_orig_fun("clGetSamplerInfo");
	clin_o_clGetSupportedImageFormats = clin_get_orig_fun("clGetSupportedImageFormats");
	clin_o_clLinkProgram = clin_get_orig_fun("clLinkProgram");
	clin_o_clReleaseCommandQueue = clin_get_orig_fun("clReleaseCommandQueue");
	clin_o_clReleaseContext = clin_get_orig_fun("clReleaseContext");
	clin_o_clReleaseDevice = clin_get_orig_fun("clReleaseDevice");
	clin_o_clReleaseEvent = clin_get_orig_fun("clReleaseEvent");
	clin_o_clReleaseKernel = clin_get_orig_fun("clReleaseKernel");
	clin_o_clReleaseMemObject = clin_get_orig_fun("clReleaseMemObject");
	clin_o_clReleaseProgram = clin_get_orig_fun("clReleaseProgram");
	clin_o_clReleaseSampler = clin_get_orig_fun("clReleaseSampler");
	clin_o_clRetainCommandQueue = clin_get_orig_fun("clRetainCommandQueue");
	clin_o_clRetainContext = clin_get_orig_fun("clRetainContext");
	clin_o_clRetainDevice = clin_get_orig_fun("clRetainDevice");
	clin_o_clRetainEvent = clin_get_orig_fun("clRetainEvent");
	clin_o_clRetainKernel = clin_get_orig_fun("clRetainKernel");
	clin_o_clRetainMemObject = clin_get_orig_fun("clRetainMemObject");
	clin_o_clRetainProgram = clin_get_orig_fun("clRetainProgram");
	clin_o_clRetainSampler = clin_get_orig_fun("clRetainSampler");
	clin_o_clSVMAlloc = clin_get_orig_fun("clSVMAlloc");
	clin_o_clSVMFree = clin_get_orig_fun("clSVMFree");
	clin_o_clSetCommandQueueProperty = clin_get_orig_fun("clSetCommandQueueProperty");
	clin_o_clSetDefaultDeviceCommandQueue = clin_get_orig_fun("clSetDefaultDeviceCommandQueue");
	clin_o_clSetEventCallback = clin_get_orig_fun("clSetEventCallback");
	clin_o_clSetKernelArg = clin_get_orig_fun("clSetKernelArg");
	clin_o_clSetKernelArgSVMPointer = clin_get_orig_fun("clSetKernelArgSVMPointer");
	clin_o_clSetKernelExecInfo = clin_get_orig_fun("clSetKernelExecInfo");
	clin_o_clSetMemObjectDestructorCallback = clin_get_orig_fun("clSetMemObjectDestructorCallback");
	clin_o_clSetProgramReleaseCallback = clin_get_orig_fun("clSetProgramReleaseCallback");
	clin_o_clSetProgramSpecializationConstant = clin_get_orig_fun("clSetProgramSpecializationConstant");
	clin_o_clSetUserEventStatus = clin_get_orig_fun("clSetUserEventStatus");
	clin_o_clUnloadCompiler = clin_get_orig_fun("clUnloadCompiler");
	clin_o_clUnloadPlatformCompiler = clin_get_orig_fun("clUnloadPlatformCompiler");
	clin_o_clWaitForEvents = clin_get_orig_fun("clWaitForEvents");
}


#ifndef CLIN_CUSTOM_clBuildProgram
CLIN_ENTRY cl_int CL_API_CALL clBuildProgram(cl_program program, cl_uint num_devices, const cl_device_id* device_list, const char* options, void (CL_CALLBACK* pfn_notify)(cl_program program, void* user_data), void* user_data) {
    CLIN_LOG("clBuildProgram");
    return clin_o_clBuildProgram(program, num_devices, device_list, options, pfn_notify, user_data);
}
#endif

#ifndef CLIN_CUSTOM_clCloneKernel
CLIN_ENTRY cl_kernel CL_API_CALL clCloneKernel(cl_kernel source_kernel, cl_int* errcode_ret) {
    CLIN_LOG("clCloneKernel");
    return clin_o_clCloneKernel(source_kernel, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCompileProgram
CLIN_ENTRY cl_int CL_API_CALL clCompileProgram(cl_program program, cl_uint num_devices, const cl_device_id* device_list, const char* options, cl_uint num_input_headers, const cl_program* input_headers, const char** header_include_names, void (CL_CALLBACK* pfn_notify)(cl_program program, void* user_data), void* user_data) {
    CLIN_LOG("clCompileProgram");
    return clin_o_clCompileProgram(program, num_devices, device_list, options, num_input_headers, input_headers, header_include_names, pfn_notify, user_data);
}
#endif

#ifndef CLIN_CUSTOM_clCreateBuffer
CLIN_ENTRY cl_mem CL_API_CALL clCreateBuffer(cl_context context, cl_mem_flags flags, size_t size, void* host_ptr, cl_int* errcode_ret) {
    CLIN_LOG("clCreateBuffer");
    return clin_o_clCreateBuffer(context, flags, size, host_ptr, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateCommandQueue
CLIN_ENTRY cl_command_queue CL_API_CALL clCreateCommandQueue(cl_context context, cl_device_id device, cl_command_queue_properties properties, cl_int* errcode_ret) {
    CLIN_LOG("clCreateCommandQueue");
    return clin_o_clCreateCommandQueue(context, device, properties, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateCommandQueueWithProperties
CLIN_ENTRY cl_command_queue CL_API_CALL clCreateCommandQueueWithProperties(cl_context context, cl_device_id device, const cl_queue_properties* properties, cl_int* errcode_ret) {
    CLIN_LOG("clCreateCommandQueueWithProperties");
    return clin_o_clCreateCommandQueueWithProperties(context, device, properties, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateContext
CLIN_ENTRY cl_context CL_API_CALL clCreateContext(const cl_context_properties* properties, cl_uint num_devices, const cl_device_id* devices, void (CL_CALLBACK* pfn_notify)(const char*, const void*, size_t, void*), void* user_data, cl_int* errcode_ret) {
    CLIN_LOG("clCreateContext");
    return clin_o_clCreateContext(properties, num_devices, devices, pfn_notify, user_data, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateContextFromType
CLIN_ENTRY cl_context CL_API_CALL clCreateContextFromType(const cl_context_properties* properties, cl_device_type device_type, void (CL_CALLBACK* pfn_notify)(const char*, const void*, size_t, void*), void* user_data, cl_int* errcode_ret) {
    CLIN_LOG("clCreateContextFromType");
    return clin_o_clCreateContextFromType(properties, device_type, pfn_notify, user_data, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateFromGLBuffer
CLIN_ENTRY cl_mem CL_API_CALL clCreateFromGLBuffer(cl_context context, cl_mem_flags flags, cl_GLuint bufobj, int* errcode_ret) {
    CLIN_LOG("clCreateFromGLBuffer");
    return clin_o_clCreateFromGLBuffer(context, flags, bufobj, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateFromGLRenderbuffer
CLIN_ENTRY cl_mem CL_API_CALL clCreateFromGLRenderbuffer(cl_context context, cl_mem_flags flags, cl_GLuint renderbuffer, cl_int* errcode_ret) {
    CLIN_LOG("clCreateFromGLRenderbuffer");
    return clin_o_clCreateFromGLRenderbuffer(context, flags, renderbuffer, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateFromGLTexture
CLIN_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture(cl_context context, cl_mem_flags flags, cl_GLenum target, cl_GLint miplevel, cl_GLuint texture, cl_int* errcode_ret) {
    CLIN_LOG("clCreateFromGLTexture");
    return clin_o_clCreateFromGLTexture(context, flags, target, miplevel, texture, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateFromGLTexture2D
CLIN_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture2D(cl_context context, cl_mem_flags flags, cl_GLenum target, cl_GLint miplevel, cl_GLuint texture, cl_int* errcode_ret) {
    CLIN_LOG("clCreateFromGLTexture2D");
    return clin_o_clCreateFromGLTexture2D(context, flags, target, miplevel, texture, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateFromGLTexture3D
CLIN_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture3D(cl_context context, cl_mem_flags flags, cl_GLenum target, cl_GLint miplevel, cl_GLuint texture, cl_int* errcode_ret) {
    CLIN_LOG("clCreateFromGLTexture3D");
    return clin_o_clCreateFromGLTexture3D(context, flags, target, miplevel, texture, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateImage
CLIN_ENTRY cl_mem CL_API_CALL clCreateImage(cl_context context, cl_mem_flags flags, const cl_image_format* image_format, const cl_image_desc* image_desc, void* host_ptr, cl_int* errcode_ret) {
    CLIN_LOG("clCreateImage");
    return clin_o_clCreateImage(context, flags, image_format, image_desc, host_ptr, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateImage2D
CLIN_ENTRY cl_mem CL_API_CALL clCreateImage2D(cl_context context, cl_mem_flags flags, const cl_image_format* image_format, size_t image_width, size_t image_height, size_t image_row_pitch, void* host_ptr, cl_int* errcode_ret) {
    CLIN_LOG("clCreateImage2D");
    return clin_o_clCreateImage2D(context, flags, image_format, image_width, image_height, image_row_pitch, host_ptr, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateImage3D
CLIN_ENTRY cl_mem CL_API_CALL clCreateImage3D(cl_context context, cl_mem_flags flags, const cl_image_format* image_format, size_t image_width, size_t image_height, size_t image_depth, size_t image_row_pitch, size_t image_slice_pitch, void* host_ptr, cl_int* errcode_ret) {
    CLIN_LOG("clCreateImage3D");
    return clin_o_clCreateImage3D(context, flags, image_format, image_width, image_height, image_depth, image_row_pitch, image_slice_pitch, host_ptr, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateKernel
CLIN_ENTRY cl_kernel CL_API_CALL clCreateKernel(cl_program program, const char* kernel_name, cl_int* errcode_ret) {
    CLIN_LOG("clCreateKernel");
    return clin_o_clCreateKernel(program, kernel_name, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateKernelsInProgram
CLIN_ENTRY cl_int CL_API_CALL clCreateKernelsInProgram(cl_program program, cl_uint num_kernels, cl_kernel* kernels, cl_uint* num_kernels_ret) {
    CLIN_LOG("clCreateKernelsInProgram");
    return clin_o_clCreateKernelsInProgram(program, num_kernels, kernels, num_kernels_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreatePipe
CLIN_ENTRY cl_mem CL_API_CALL clCreatePipe(cl_context context, cl_mem_flags flags, cl_uint pipe_packet_size, cl_uint pipe_max_packets, const cl_pipe_properties* properties, cl_int* errcode_ret) {
    CLIN_LOG("clCreatePipe");
    return clin_o_clCreatePipe(context, flags, pipe_packet_size, pipe_max_packets, properties, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateProgramWithBinary
CLIN_ENTRY cl_program CL_API_CALL clCreateProgramWithBinary(cl_context context, cl_uint num_devices, const cl_device_id* device_list, const size_t* lengths, const unsigned char** binaries, cl_int* binary_status, cl_int* errcode_ret) {
    CLIN_LOG("clCreateProgramWithBinary");
    return clin_o_clCreateProgramWithBinary(context, num_devices, device_list, lengths, binaries, binary_status, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateProgramWithBuiltInKernels
CLIN_ENTRY cl_program CL_API_CALL clCreateProgramWithBuiltInKernels(cl_context context, cl_uint num_devices, const cl_device_id* device_list, const char* kernel_names, cl_int* errcode_ret) {
    CLIN_LOG("clCreateProgramWithBuiltInKernels");
    return clin_o_clCreateProgramWithBuiltInKernels(context, num_devices, device_list, kernel_names, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateProgramWithIL
CLIN_ENTRY cl_program CL_API_CALL clCreateProgramWithIL(cl_context context, const void* il, size_t length, cl_int* errcode_ret) {
    CLIN_LOG("clCreateProgramWithIL");
    return clin_o_clCreateProgramWithIL(context, il, length, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateProgramWithSource
CLIN_ENTRY cl_program CL_API_CALL clCreateProgramWithSource(cl_context context, cl_uint count, const char** strings, const size_t* lengths, cl_int* errcode_ret) {
    CLIN_LOG("clCreateProgramWithSource");
    return clin_o_clCreateProgramWithSource(context, count, strings, lengths, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateSampler
CLIN_ENTRY cl_sampler CL_API_CALL clCreateSampler(cl_context context, cl_bool normalized_coords, cl_addressing_mode addressing_mode, cl_filter_mode filter_mode, cl_int* errcode_ret) {
    CLIN_LOG("clCreateSampler");
    return clin_o_clCreateSampler(context, normalized_coords, addressing_mode, filter_mode, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateSamplerWithProperties
CLIN_ENTRY cl_sampler CL_API_CALL clCreateSamplerWithProperties(cl_context context, const cl_sampler_properties* normalized_coords, cl_int* errcode_ret) {
    CLIN_LOG("clCreateSamplerWithProperties");
    return clin_o_clCreateSamplerWithProperties(context, normalized_coords, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateSubBuffer
CLIN_ENTRY cl_mem CL_API_CALL clCreateSubBuffer(cl_mem buffer, cl_mem_flags flags, cl_buffer_create_type buffer_create_type, const void* buffer_create_info, cl_int* errcode_ret) {
    CLIN_LOG("clCreateSubBuffer");
    return clin_o_clCreateSubBuffer(buffer, flags, buffer_create_type, buffer_create_info, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateSubDevices
CLIN_ENTRY cl_int CL_API_CALL clCreateSubDevices(cl_device_id in_device, const cl_device_partition_property* properties, cl_uint num_devices, cl_device_id* out_devices, cl_uint* num_devices_ret) {
    CLIN_LOG("clCreateSubDevices");
    return clin_o_clCreateSubDevices(in_device, properties, num_devices, out_devices, num_devices_ret);
}
#endif

#ifndef CLIN_CUSTOM_clCreateUserEvent
CLIN_ENTRY cl_event CL_API_CALL clCreateUserEvent(cl_context context, cl_int* errcode_ret) {
    CLIN_LOG("clCreateUserEvent");
    return clin_o_clCreateUserEvent(context, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueAcquireGLObjects
CLIN_ENTRY cl_int CL_API_CALL clEnqueueAcquireGLObjects(cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueAcquireGLObjects");
    return clin_o_clEnqueueAcquireGLObjects(command_queue, num_objects, mem_objects, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueBarrier
CLIN_ENTRY cl_int CL_API_CALL clEnqueueBarrier(cl_command_queue command_queue) {
    CLIN_LOG("clEnqueueBarrier");
    return clin_o_clEnqueueBarrier(command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueBarrierWithWaitList
CLIN_ENTRY cl_int CL_API_CALL clEnqueueBarrierWithWaitList(cl_command_queue command_queue, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueBarrierWithWaitList");
    return clin_o_clEnqueueBarrierWithWaitList(command_queue, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueCopyBuffer
CLIN_ENTRY cl_int CL_API_CALL clEnqueueCopyBuffer(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_buffer, size_t src_offset, size_t dst_offset, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueCopyBuffer");
    return clin_o_clEnqueueCopyBuffer(command_queue, src_buffer, dst_buffer, src_offset, dst_offset, size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueCopyBufferRect
CLIN_ENTRY cl_int CL_API_CALL clEnqueueCopyBufferRect(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_buffer, const size_t* src_origin, const size_t* dst_origin, const size_t* region, size_t src_row_pitch, size_t src_slice_pitch, size_t dst_row_pitch, size_t dst_slice_pitch, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueCopyBufferRect");
    return clin_o_clEnqueueCopyBufferRect(command_queue, src_buffer, dst_buffer, src_origin, dst_origin, region, src_row_pitch, src_slice_pitch, dst_row_pitch, dst_slice_pitch, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueCopyBufferToImage
CLIN_ENTRY cl_int CL_API_CALL clEnqueueCopyBufferToImage(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_image, size_t src_offset, const size_t* dst_origin, const size_t* region, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueCopyBufferToImage");
    return clin_o_clEnqueueCopyBufferToImage(command_queue, src_buffer, dst_image, src_offset, dst_origin, region, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueCopyImage
CLIN_ENTRY cl_int CL_API_CALL clEnqueueCopyImage(cl_command_queue command_queue, cl_mem src_image, cl_mem dst_image, const size_t* src_origin, const size_t* dst_origin, const size_t* region, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueCopyImage");
    return clin_o_clEnqueueCopyImage(command_queue, src_image, dst_image, src_origin, dst_origin, region, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueCopyImageToBuffer
CLIN_ENTRY cl_int CL_API_CALL clEnqueueCopyImageToBuffer(cl_command_queue command_queue, cl_mem src_image, cl_mem dst_buffer, const size_t* src_origin, const size_t* region, size_t dst_offset, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueCopyImageToBuffer");
    return clin_o_clEnqueueCopyImageToBuffer(command_queue, src_image, dst_buffer, src_origin, region, dst_offset, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueFillBuffer
CLIN_ENTRY cl_int CL_API_CALL clEnqueueFillBuffer(cl_command_queue command_queue, cl_mem buffer, const void* pattern, size_t pattern_size, size_t offset, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueFillBuffer");
    return clin_o_clEnqueueFillBuffer(command_queue, buffer, pattern, pattern_size, offset, size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueFillImage
CLIN_ENTRY cl_int CL_API_CALL clEnqueueFillImage(cl_command_queue command_queue, cl_mem image, const void* fill_color, const size_t* origin, const size_t* region, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueFillImage");
    return clin_o_clEnqueueFillImage(command_queue, image, fill_color, origin, region, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueMapBuffer
CLIN_ENTRY void* CL_API_CALL clEnqueueMapBuffer(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_map, cl_map_flags map_flags, size_t offset, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event, cl_int* errcode_ret) {
    CLIN_LOG("clEnqueueMapBuffer");
    return clin_o_clEnqueueMapBuffer(command_queue, buffer, blocking_map, map_flags, offset, size, num_events_in_wait_list, event_wait_list, event, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueMapImage
CLIN_ENTRY void* CL_API_CALL clEnqueueMapImage(cl_command_queue command_queue, cl_mem image, cl_bool blocking_map, cl_map_flags map_flags, const size_t* origin, const size_t* region, size_t* image_row_pitch, size_t* image_slice_pitch, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event, cl_int* errcode_ret) {
    CLIN_LOG("clEnqueueMapImage");
    return clin_o_clEnqueueMapImage(command_queue, image, blocking_map, map_flags, origin, region, image_row_pitch, image_slice_pitch, num_events_in_wait_list, event_wait_list, event, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueMarker
CLIN_ENTRY cl_int CL_API_CALL clEnqueueMarker(cl_command_queue command_queue, cl_event* event) {
    CLIN_LOG("clEnqueueMarker");
    return clin_o_clEnqueueMarker(command_queue, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueMarkerWithWaitList
CLIN_ENTRY cl_int CL_API_CALL clEnqueueMarkerWithWaitList(cl_command_queue command_queue, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueMarkerWithWaitList");
    return clin_o_clEnqueueMarkerWithWaitList(command_queue, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueMigrateMemObjects
CLIN_ENTRY cl_int CL_API_CALL clEnqueueMigrateMemObjects(cl_command_queue command_queue, cl_uint num_mem_objects, const cl_mem* mem_objects, cl_mem_migration_flags flags, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueMigrateMemObjects");
    return clin_o_clEnqueueMigrateMemObjects(command_queue, num_mem_objects, mem_objects, flags, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueNDRangeKernel
CLIN_ENTRY cl_int CL_API_CALL clEnqueueNDRangeKernel(cl_command_queue command_queue, cl_kernel kernel, cl_uint work_dim, const size_t* global_work_offset, const size_t* global_work_size, const size_t* local_work_size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueNDRangeKernel");
    return clin_o_clEnqueueNDRangeKernel(command_queue, kernel, work_dim, global_work_offset, global_work_size, local_work_size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueNativeKernel
CLIN_ENTRY cl_int CL_API_CALL clEnqueueNativeKernel(cl_command_queue command_queue, void (CL_CALLBACK* user_func)(void*), void* args, size_t cb_args, cl_uint num_mem_objects, const cl_mem* mem_list, const void** args_mem_loc, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueNativeKernel");
    return clin_o_clEnqueueNativeKernel(command_queue, user_func, args, cb_args, num_mem_objects, mem_list, args_mem_loc, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueReadBuffer
CLIN_ENTRY cl_int CL_API_CALL clEnqueueReadBuffer(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_read, size_t offset, size_t size, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueReadBuffer");
    return clin_o_clEnqueueReadBuffer(command_queue, buffer, blocking_read, offset, size, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueReadBufferRect
CLIN_ENTRY cl_int CL_API_CALL clEnqueueReadBufferRect(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_read, const size_t* buffer_offset, const size_t* host_offset, const size_t* region, size_t buffer_row_pitch, size_t buffer_slice_pitch, size_t host_row_pitch, size_t host_slice_pitch, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueReadBufferRect");
    return clin_o_clEnqueueReadBufferRect(command_queue, buffer, blocking_read, buffer_offset, host_offset, region, buffer_row_pitch, buffer_slice_pitch, host_row_pitch, host_slice_pitch, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueReadImage
CLIN_ENTRY cl_int CL_API_CALL clEnqueueReadImage(cl_command_queue command_queue, cl_mem image, cl_bool blocking_read, const size_t* origin, const size_t* region, size_t row_pitch, size_t slice_pitch, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueReadImage");
    return clin_o_clEnqueueReadImage(command_queue, image, blocking_read, origin, region, row_pitch, slice_pitch, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueReleaseGLObjects
CLIN_ENTRY cl_int CL_API_CALL clEnqueueReleaseGLObjects(cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueReleaseGLObjects");
    return clin_o_clEnqueueReleaseGLObjects(command_queue, num_objects, mem_objects, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMFree
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMFree(cl_command_queue command_queue, cl_uint num_svm_pointers, void* svm_pointers, void (CL_CALLBACK* pfn_free_func)(cl_command_queue queue, cl_uint num_svm_pointers, void* svm_pointers, void* user_data), void* user_data, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMFree");
    return clin_o_clEnqueueSVMFree(command_queue, num_svm_pointers, svm_pointers, pfn_free_func, user_data, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMMap
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMMap(cl_command_queue command_queue, cl_bool blocking_map, cl_map_flags flags, void* svm_ptr, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMMap");
    return clin_o_clEnqueueSVMMap(command_queue, blocking_map, flags, svm_ptr, size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMMemFill
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMMemFill(cl_command_queue command_queue, void* svm_ptr, const void* pattern, size_t pattern_size, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMMemFill");
    return clin_o_clEnqueueSVMMemFill(command_queue, svm_ptr, pattern, pattern_size, size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMMemcpy
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMMemcpy(cl_command_queue command_queue, cl_bool blocking_copy, void* dst_ptr, const void* src_ptr, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMMemcpy");
    return clin_o_clEnqueueSVMMemcpy(command_queue, blocking_copy, dst_ptr, src_ptr, size, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMMigrateMem
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMMigrateMem(cl_command_queue command_queue, cl_uint num_svm_pointers, const void** svm_pointers, const size_t* sizes, cl_mem_migration_flags flags, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMMigrateMem");
    return clin_o_clEnqueueSVMMigrateMem(command_queue, num_svm_pointers, svm_pointers, sizes, flags, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueSVMUnmap
CLIN_ENTRY cl_int CL_API_CALL clEnqueueSVMUnmap(cl_command_queue command_queue, void* svm_ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueSVMUnmap");
    return clin_o_clEnqueueSVMUnmap(command_queue, svm_ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueTask
CLIN_ENTRY cl_int CL_API_CALL clEnqueueTask(cl_command_queue command_queue, cl_kernel kernel, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueTask");
    return clin_o_clEnqueueTask(command_queue, kernel, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueUnmapMemObject
CLIN_ENTRY cl_int CL_API_CALL clEnqueueUnmapMemObject(cl_command_queue command_queue, cl_mem memobj, void* mapped_ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueUnmapMemObject");
    return clin_o_clEnqueueUnmapMemObject(command_queue, memobj, mapped_ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueWaitForEvents
CLIN_ENTRY cl_int CL_API_CALL clEnqueueWaitForEvents(cl_command_queue command_queue, cl_uint num_events, const cl_event* event_list) {
    CLIN_LOG("clEnqueueWaitForEvents");
    return clin_o_clEnqueueWaitForEvents(command_queue, num_events, event_list);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueWriteBuffer
CLIN_ENTRY cl_int CL_API_CALL clEnqueueWriteBuffer(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_write, size_t offset, size_t size, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueWriteBuffer");
    return clin_o_clEnqueueWriteBuffer(command_queue, buffer, blocking_write, offset, size, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueWriteBufferRect
CLIN_ENTRY cl_int CL_API_CALL clEnqueueWriteBufferRect(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_write, const size_t* buffer_offset, const size_t* host_offset, const size_t* region, size_t buffer_row_pitch, size_t buffer_slice_pitch, size_t host_row_pitch, size_t host_slice_pitch, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueWriteBufferRect");
    return clin_o_clEnqueueWriteBufferRect(command_queue, buffer, blocking_write, buffer_offset, host_offset, region, buffer_row_pitch, buffer_slice_pitch, host_row_pitch, host_slice_pitch, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clEnqueueWriteImage
CLIN_ENTRY cl_int CL_API_CALL clEnqueueWriteImage(cl_command_queue command_queue, cl_mem image, cl_bool blocking_write, const size_t* origin, const size_t* region, size_t input_row_pitch, size_t input_slice_pitch, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
    CLIN_LOG("clEnqueueWriteImage");
    return clin_o_clEnqueueWriteImage(command_queue, image, blocking_write, origin, region, input_row_pitch, input_slice_pitch, ptr, num_events_in_wait_list, event_wait_list, event);
}
#endif

#ifndef CLIN_CUSTOM_clFinish
CLIN_ENTRY cl_int CL_API_CALL clFinish(cl_command_queue command_queue) {
    CLIN_LOG("clFinish");
    return clin_o_clFinish(command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clFlush
CLIN_ENTRY cl_int CL_API_CALL clFlush(cl_command_queue command_queue) {
    CLIN_LOG("clFlush");
    return clin_o_clFlush(command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clGetCommandQueueInfo
CLIN_ENTRY cl_int CL_API_CALL clGetCommandQueueInfo(cl_command_queue command_queue, cl_command_queue_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetCommandQueueInfo");
    return clin_o_clGetCommandQueueInfo(command_queue, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetContextInfo
CLIN_ENTRY cl_int CL_API_CALL clGetContextInfo(cl_context context, cl_context_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetContextInfo");
    return clin_o_clGetContextInfo(context, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetDeviceAndHostTimer
CLIN_ENTRY cl_int CL_API_CALL clGetDeviceAndHostTimer(cl_device_id device, cl_ulong* device_timestamp, cl_ulong* host_timestamp) {
    CLIN_LOG("clGetDeviceAndHostTimer");
    return clin_o_clGetDeviceAndHostTimer(device, device_timestamp, host_timestamp);
}
#endif

#ifndef CLIN_CUSTOM_clGetDeviceIDs
CLIN_ENTRY cl_int CL_API_CALL clGetDeviceIDs(cl_platform_id platform, cl_device_type device_type, cl_uint num_entries, cl_device_id* devices, cl_uint* num_devices) {
    CLIN_LOG("clGetDeviceIDs");
    return clin_o_clGetDeviceIDs(platform, device_type, num_entries, devices, num_devices);
}
#endif

#ifndef CLIN_CUSTOM_clGetDeviceInfo
CLIN_ENTRY cl_int CL_API_CALL clGetDeviceInfo(cl_device_id device, cl_device_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetDeviceInfo");
    return clin_o_clGetDeviceInfo(device, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetEventInfo
CLIN_ENTRY cl_int CL_API_CALL clGetEventInfo(cl_event event, cl_event_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetEventInfo");
    return clin_o_clGetEventInfo(event, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetEventProfilingInfo
CLIN_ENTRY cl_int CL_API_CALL clGetEventProfilingInfo(cl_event event, cl_profiling_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetEventProfilingInfo");
    return clin_o_clGetEventProfilingInfo(event, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetExtensionFunctionAddress
CLIN_ENTRY void* CL_API_CALL clGetExtensionFunctionAddress(const char* func_name) {
    CLIN_LOG("clGetExtensionFunctionAddress");
    return clin_o_clGetExtensionFunctionAddress(func_name);
}
#endif

#ifndef CLIN_CUSTOM_clGetExtensionFunctionAddressForPlatform
CLIN_ENTRY void* CL_API_CALL clGetExtensionFunctionAddressForPlatform(cl_platform_id platform, const char* func_name) {
    CLIN_LOG("clGetExtensionFunctionAddressForPlatform");
    return clin_o_clGetExtensionFunctionAddressForPlatform(platform, func_name);
}
#endif

#ifndef CLIN_CUSTOM_clGetGLObjectInfo
CLIN_ENTRY cl_int CL_API_CALL clGetGLObjectInfo(cl_mem memobj, cl_gl_object_type* gl_object_type, cl_GLuint* gl_object_name) {
    CLIN_LOG("clGetGLObjectInfo");
    return clin_o_clGetGLObjectInfo(memobj, gl_object_type, gl_object_name);
}
#endif

#ifndef CLIN_CUSTOM_clGetGLTextureInfo
CLIN_ENTRY cl_int CL_API_CALL clGetGLTextureInfo(cl_mem memobj, cl_gl_texture_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetGLTextureInfo");
    return clin_o_clGetGLTextureInfo(memobj, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetHostTimer
CLIN_ENTRY cl_int CL_API_CALL clGetHostTimer(cl_device_id device, cl_ulong* host_timestamp) {
    CLIN_LOG("clGetHostTimer");
    return clin_o_clGetHostTimer(device, host_timestamp);
}
#endif

#ifndef CLIN_CUSTOM_clGetImageInfo
CLIN_ENTRY cl_int CL_API_CALL clGetImageInfo(cl_mem image, cl_image_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetImageInfo");
    return clin_o_clGetImageInfo(image, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetKernelArgInfo
CLIN_ENTRY cl_int CL_API_CALL clGetKernelArgInfo(cl_kernel kernel, cl_uint arg_indx, cl_kernel_arg_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetKernelArgInfo");
    return clin_o_clGetKernelArgInfo(kernel, arg_indx, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetKernelInfo
CLIN_ENTRY cl_int CL_API_CALL clGetKernelInfo(cl_kernel kernel, cl_kernel_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetKernelInfo");
    return clin_o_clGetKernelInfo(kernel, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetKernelSubGroupInfo
CLIN_ENTRY cl_int CL_API_CALL clGetKernelSubGroupInfo(cl_kernel kernel, cl_device_id device, cl_kernel_sub_group_info param_name, size_t input_value_size, const void* input_value, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetKernelSubGroupInfo");
    return clin_o_clGetKernelSubGroupInfo(kernel, device, param_name, input_value_size, input_value, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetKernelWorkGroupInfo
CLIN_ENTRY cl_int CL_API_CALL clGetKernelWorkGroupInfo(cl_kernel kernel, cl_device_id device, cl_kernel_work_group_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetKernelWorkGroupInfo");
    return clin_o_clGetKernelWorkGroupInfo(kernel, device, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetMemObjectInfo
CLIN_ENTRY cl_int CL_API_CALL clGetMemObjectInfo(cl_mem memobj, cl_mem_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetMemObjectInfo");
    return clin_o_clGetMemObjectInfo(memobj, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetPipeInfo
CLIN_ENTRY cl_int CL_API_CALL clGetPipeInfo(cl_mem pipe, cl_pipe_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetPipeInfo");
    return clin_o_clGetPipeInfo(pipe, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetPlatformIDs
CLIN_ENTRY cl_int CL_API_CALL clGetPlatformIDs(cl_uint num_entries, cl_platform_id* platforms, cl_uint* num_platforms) {
    CLIN_LOG("clGetPlatformIDs");
    return clin_o_clGetPlatformIDs(num_entries, platforms, num_platforms);
}
#endif

#ifndef CLIN_CUSTOM_clGetPlatformInfo
CLIN_ENTRY cl_int CL_API_CALL clGetPlatformInfo(cl_platform_id platform, cl_platform_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetPlatformInfo");
    return clin_o_clGetPlatformInfo(platform, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetProgramBuildInfo
CLIN_ENTRY cl_int CL_API_CALL clGetProgramBuildInfo(cl_program program, cl_device_id device, cl_program_build_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetProgramBuildInfo");
    return clin_o_clGetProgramBuildInfo(program, device, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetProgramInfo
CLIN_ENTRY cl_int CL_API_CALL clGetProgramInfo(cl_program program, cl_program_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetProgramInfo");
    return clin_o_clGetProgramInfo(program, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetSamplerInfo
CLIN_ENTRY cl_int CL_API_CALL clGetSamplerInfo(cl_sampler sampler, cl_sampler_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret) {
    CLIN_LOG("clGetSamplerInfo");
    return clin_o_clGetSamplerInfo(sampler, param_name, param_value_size, param_value, param_value_size_ret);
}
#endif

#ifndef CLIN_CUSTOM_clGetSupportedImageFormats
CLIN_ENTRY cl_int CL_API_CALL clGetSupportedImageFormats(cl_context context, cl_mem_flags flags, cl_mem_object_type image_type, cl_uint num_entries, cl_image_format* image_formats, cl_uint* num_image_formats) {
    CLIN_LOG("clGetSupportedImageFormats");
    return clin_o_clGetSupportedImageFormats(context, flags, image_type, num_entries, image_formats, num_image_formats);
}
#endif

#ifndef CLIN_CUSTOM_clLinkProgram
CLIN_ENTRY cl_program CL_API_CALL clLinkProgram(cl_context context, cl_uint num_devices, const cl_device_id* device_list, const char* options, cl_uint num_input_programs, const cl_program* input_programs, void (CL_CALLBACK* pfn_notify)(cl_program program, void* user_data), void* user_data, cl_int* errcode_ret) {
    CLIN_LOG("clLinkProgram");
    return clin_o_clLinkProgram(context, num_devices, device_list, options, num_input_programs, input_programs, pfn_notify, user_data, errcode_ret);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseCommandQueue
CLIN_ENTRY cl_int CL_API_CALL clReleaseCommandQueue(cl_command_queue command_queue) {
    CLIN_LOG("clReleaseCommandQueue");
    return clin_o_clReleaseCommandQueue(command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseContext
CLIN_ENTRY cl_int CL_API_CALL clReleaseContext(cl_context context) {
    CLIN_LOG("clReleaseContext");
    return clin_o_clReleaseContext(context);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseDevice
CLIN_ENTRY cl_int CL_API_CALL clReleaseDevice(cl_device_id device) {
    CLIN_LOG("clReleaseDevice");
    return clin_o_clReleaseDevice(device);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseEvent
CLIN_ENTRY cl_int CL_API_CALL clReleaseEvent(cl_event event) {
    CLIN_LOG("clReleaseEvent");
    return clin_o_clReleaseEvent(event);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseKernel
CLIN_ENTRY cl_int CL_API_CALL clReleaseKernel(cl_kernel kernel) {
    CLIN_LOG("clReleaseKernel");
    return clin_o_clReleaseKernel(kernel);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseMemObject
CLIN_ENTRY cl_int CL_API_CALL clReleaseMemObject(cl_mem memobj) {
    CLIN_LOG("clReleaseMemObject");
    return clin_o_clReleaseMemObject(memobj);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseProgram
CLIN_ENTRY cl_int CL_API_CALL clReleaseProgram(cl_program program) {
    CLIN_LOG("clReleaseProgram");
    return clin_o_clReleaseProgram(program);
}
#endif

#ifndef CLIN_CUSTOM_clReleaseSampler
CLIN_ENTRY cl_int CL_API_CALL clReleaseSampler(cl_sampler sampler) {
    CLIN_LOG("clReleaseSampler");
    return clin_o_clReleaseSampler(sampler);
}
#endif

#ifndef CLIN_CUSTOM_clRetainCommandQueue
CLIN_ENTRY cl_int CL_API_CALL clRetainCommandQueue(cl_command_queue command_queue) {
    CLIN_LOG("clRetainCommandQueue");
    return clin_o_clRetainCommandQueue(command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clRetainContext
CLIN_ENTRY cl_int CL_API_CALL clRetainContext(cl_context context) {
    CLIN_LOG("clRetainContext");
    return clin_o_clRetainContext(context);
}
#endif

#ifndef CLIN_CUSTOM_clRetainDevice
CLIN_ENTRY cl_int CL_API_CALL clRetainDevice(cl_device_id device) {
    CLIN_LOG("clRetainDevice");
    return clin_o_clRetainDevice(device);
}
#endif

#ifndef CLIN_CUSTOM_clRetainEvent
CLIN_ENTRY cl_int CL_API_CALL clRetainEvent(cl_event event) {
    CLIN_LOG("clRetainEvent");
    return clin_o_clRetainEvent(event);
}
#endif

#ifndef CLIN_CUSTOM_clRetainKernel
CLIN_ENTRY cl_int CL_API_CALL clRetainKernel(cl_kernel kernel) {
    CLIN_LOG("clRetainKernel");
    return clin_o_clRetainKernel(kernel);
}
#endif

#ifndef CLIN_CUSTOM_clRetainMemObject
CLIN_ENTRY cl_int CL_API_CALL clRetainMemObject(cl_mem memobj) {
    CLIN_LOG("clRetainMemObject");
    return clin_o_clRetainMemObject(memobj);
}
#endif

#ifndef CLIN_CUSTOM_clRetainProgram
CLIN_ENTRY cl_int CL_API_CALL clRetainProgram(cl_program program) {
    CLIN_LOG("clRetainProgram");
    return clin_o_clRetainProgram(program);
}
#endif

#ifndef CLIN_CUSTOM_clRetainSampler
CLIN_ENTRY cl_int CL_API_CALL clRetainSampler(cl_sampler sampler) {
    CLIN_LOG("clRetainSampler");
    return clin_o_clRetainSampler(sampler);
}
#endif

#ifndef CLIN_CUSTOM_clSVMAlloc
CLIN_ENTRY void* CL_API_CALL clSVMAlloc(cl_context context, cl_svm_mem_flags flags, size_t size, cl_uint alignment) {
    CLIN_LOG("clSVMAlloc");
    return clin_o_clSVMAlloc(context, flags, size, alignment);
}
#endif

#ifndef CLIN_CUSTOM_clSVMFree
CLIN_ENTRY void CL_API_CALL clSVMFree(cl_context context, void* svm_pointer) {
    CLIN_LOG("clSVMFree");
    clin_o_clSVMFree(context, svm_pointer);
}
#endif

#ifndef CLIN_CUSTOM_clSetCommandQueueProperty
CLIN_ENTRY cl_int CL_API_CALL clSetCommandQueueProperty(cl_command_queue command_queue, cl_command_queue_properties properties, cl_bool enable, cl_command_queue_properties* old_properties) {
    CLIN_LOG("clSetCommandQueueProperty");
    return clin_o_clSetCommandQueueProperty(command_queue, properties, enable, old_properties);
}
#endif

#ifndef CLIN_CUSTOM_clSetDefaultDeviceCommandQueue
CLIN_ENTRY cl_int CL_API_CALL clSetDefaultDeviceCommandQueue(cl_context context, cl_device_id device, cl_command_queue command_queue) {
    CLIN_LOG("clSetDefaultDeviceCommandQueue");
    return clin_o_clSetDefaultDeviceCommandQueue(context, device, command_queue);
}
#endif

#ifndef CLIN_CUSTOM_clSetEventCallback
CLIN_ENTRY cl_int CL_API_CALL clSetEventCallback(cl_event event, cl_int command_exec_callback_type, void (CL_CALLBACK* pfn_notify)(cl_event, cl_int, void*), void* user_data) {
    CLIN_LOG("clSetEventCallback");
    return clin_o_clSetEventCallback(event, command_exec_callback_type, pfn_notify, user_data);
}
#endif

#ifndef CLIN_CUSTOM_clSetKernelArg
CLIN_ENTRY cl_int CL_API_CALL clSetKernelArg(cl_kernel kernel, cl_uint arg_index, size_t arg_size, const void* arg_value) {
    CLIN_LOG("clSetKernelArg");
    return clin_o_clSetKernelArg(kernel, arg_index, arg_size, arg_value);
}
#endif

#ifndef CLIN_CUSTOM_clSetKernelArgSVMPointer
CLIN_ENTRY cl_int CL_API_CALL clSetKernelArgSVMPointer(cl_kernel kernel, cl_uint arg_index, const void* arg_value) {
    CLIN_LOG("clSetKernelArgSVMPointer");
    return clin_o_clSetKernelArgSVMPointer(kernel, arg_index, arg_value);
}
#endif

#ifndef CLIN_CUSTOM_clSetKernelExecInfo
CLIN_ENTRY cl_int CL_API_CALL clSetKernelExecInfo(cl_kernel kernel, cl_kernel_exec_info param_name, size_t param_value_size, const void* param_value) {
    CLIN_LOG("clSetKernelExecInfo");
    return clin_o_clSetKernelExecInfo(kernel, param_name, param_value_size, param_value);
}
#endif

#ifndef CLIN_CUSTOM_clSetMemObjectDestructorCallback
CLIN_ENTRY cl_int CL_API_CALL clSetMemObjectDestructorCallback(cl_mem memobj, void (CL_CALLBACK* pfn_notify)( cl_mem memobj, void* user_data), void* user_data) {
    CLIN_LOG("clSetMemObjectDestructorCallback");
    return clin_o_clSetMemObjectDestructorCallback(memobj, pfn_notify, user_data);
}
#endif

#ifndef CLIN_CUSTOM_clSetProgramReleaseCallback
CLIN_ENTRY cl_int CL_API_CALL clSetProgramReleaseCallback(cl_program program, void (CL_CALLBACK* pfn_notify)(cl_program program, void* user_data), void* user_data) {
    CLIN_LOG("clSetProgramReleaseCallback");
    return clin_o_clSetProgramReleaseCallback(program, pfn_notify, user_data);
}
#endif

#ifndef CLIN_CUSTOM_clSetProgramSpecializationConstant
CLIN_ENTRY cl_int CL_API_CALL clSetProgramSpecializationConstant(cl_program program, cl_uint spec_id, size_t spec_size, const void* spec_value) {
    CLIN_LOG("clSetProgramSpecializationConstant");
    return clin_o_clSetProgramSpecializationConstant(program, spec_id, spec_size, spec_value);
}
#endif

#ifndef CLIN_CUSTOM_clSetUserEventStatus
CLIN_ENTRY cl_int CL_API_CALL clSetUserEventStatus(cl_event event, cl_int execution_status) {
    CLIN_LOG("clSetUserEventStatus");
    return clin_o_clSetUserEventStatus(event, execution_status);
}
#endif

#ifndef CLIN_CUSTOM_clUnloadCompiler
CLIN_ENTRY cl_int CL_API_CALL clUnloadCompiler(void) {
    CLIN_LOG("clUnloadCompiler");
    return clin_o_clUnloadCompiler();
}
#endif

#ifndef CLIN_CUSTOM_clUnloadPlatformCompiler
CLIN_ENTRY cl_int CL_API_CALL clUnloadPlatformCompiler(cl_platform_id platform) {
    CLIN_LOG("clUnloadPlatformCompiler");
    return clin_o_clUnloadPlatformCompiler(platform);
}
#endif

#ifndef CLIN_CUSTOM_clWaitForEvents
CLIN_ENTRY cl_int CL_API_CALL clWaitForEvents(cl_uint num_events, const cl_event* event_list) {
    CLIN_LOG("clWaitForEvents");
    return clin_o_clWaitForEvents(num_events, event_list);
}
#endif

