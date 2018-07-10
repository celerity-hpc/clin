#include <stdio.h>

#ifndef CLIN_ENABLE_LOGGING
#define CLIN_ENABLE_LOGGING 0
#endif

#ifndef CLIN_LOG_TO_FILE
#define CLIN_LOG_TO_FILE 0
#endif

#if CLIN_ENABLE_LOGGING
#define CLIN_LOG(_STR, ...) _CLIN_LOG(_STR, ## __VA_ARGS__)
#else
#define CLIN_LOG(_STR, ...)
#endif

#if CLIN_LOG_TO_FILE

#define _CLIN_LOG(_STR, ...) \
fprintf(clin_g_log_file, "%10.3f | " _STR "\n", clin_get_timestamp(), ## __VA_ARGS__);

#else

#define _CLIN_LOG(_STR, ...) \
printf("%10.3f | " _STR "\n", clin_get_timestamp(), ## __VA_ARGS__);

#endif // CLIN_LOG_TO_FILE

#define CLIN_LOG_NAME "clin.log"
FILE* clin_g_log_file;

void clin_logging_init() {
#if CLIN_LOG_TO_FILE
	clin_g_log_file = fopen("clin.log", "w+");
#endif
}

void clin_logging_end() {
#if CLIN_LOG_TO_FILE
	fclose(clin_g_log_file);
#endif
}
