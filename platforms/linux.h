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
	void* funptr = dlsym(RTLD_NEXT, name);
	if(funptr == NULL) {
		CLIN_LOG("ERROR: Could not load function %s in original library", name);
	}
	CLIN_LOG("Init: loaded original function %s", name);
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
