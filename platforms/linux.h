#include <dlfcn.h>
#include <sys/time.h>

#define CLIN_ENTRY

void clin_platform_init() {
	// nothing to do
}
void clin_platform_end() {
	// nothing to do
}

void* clin_get_orig_fun(const char* name) {
	void* handle = dlopen("libOpenCL.so", RTLD_NOW);
	if (handle == NULL) {
		CLIN_LOG("ERROR: Failed to load original libOpenCL.so (message: %s)", dlerror());
		return NULL;
	}
	void* funptr = dlsym(handle, name);
	if(funptr == NULL) {
		CLIN_LOG("ERROR: Could not load function %s in original library (message: %s)", name, dlerror());
	} else {
		CLIN_LOG("Init: loaded original function %s", name);
	}
	return funptr;
}

double clin_get_start_time() {
	static struct timeval ts = { 0, 0 };
	if(ts.tv_sec == 0 && ts.tv_usec == 0) gettimeofday(&ts, NULL);
	return ts.tv_sec*1000.0 + ts.tv_usec/1000.0;
}

double clin_get_timestamp() {
	struct timeval ts;
	gettimeofday(&ts, NULL);
	double t = ts.tv_sec*1000.0 + ts.tv_usec / 1000.0;
	return t - clin_get_start_time();
}

void __attribute__((constructor)) clin_linix_init() {
	clin_init();
}

void __attribute__((destructor)) clin_linux_end() {
	clin_end();
}
