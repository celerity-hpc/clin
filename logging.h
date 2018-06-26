#include <stdio.h>

#define CLIN_LOG(_STR, ...) \
fprintf(clin_g_log_file, "%10.3f | " _STR "\n", clin_get_timestamp(), ## __VA_ARGS__);

#define CLIN_LOG_NAME "clin.log"

FILE* clin_g_log_file;

void clin_logging_init() {
	clin_g_log_file = fopen("clin.log", "w+");
}

void clin_logging_end() {
	fclose(clin_g_log_file);
}
