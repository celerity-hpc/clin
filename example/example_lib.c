#define CLIN_ENABLE_LOGGING 1
#define CLIN_LOG_TO_FILE 0

#define CLIN_CUSTOM_clGetPlatformIDs

#include "clin.inc"

CLIN_ENTRY cl_int CL_API_CALL clGetPlatformIDs(cl_uint num_entries, cl_platform_id* platforms, cl_uint* num_platforms) {
    CLIN_LOG("###### INTERCEPTED: clGetPlatformIDs");
    return clin_o_clGetPlatformIDs(num_entries, platforms, num_platforms);
}

