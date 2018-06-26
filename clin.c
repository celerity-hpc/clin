
#define CL_TARGET_OPENCL_VERSION 220

#include "CL/cl_types_only.h"

/// Initialize / destroy entire library (called on library load/unload by platform-specific mechanism)
void clin_init();
void clin_end();

/// Initialize / destroy platform-specific stuff
void clin_platform_init();
void clin_platform_end();

/// Returns timestamp in milliseconds since start
double clin_get_timestamp();

#include "logging.h"

#ifdef _MSC_VER
#include "platforms/windows.h"
#else
#include "platforms/linux.h"
#endif

#include "generated.h"

void clin_init() {
	clin_logging_init();
	clin_platform_init();
	clin_init_orig_funs();
	CLIN_LOG("Init: initialization complete");
}

void clin_end() {
	CLIN_LOG("End: shutting down");
	clin_logging_end();
	clin_platform_end();
}
