#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#define CLIN_ENTRY __declspec(dllexport)

HMODULE clin_g_clmodule = NULL;

void clin_platform_init() {
	TCHAR sysdir[MAX_PATH];
	GetSystemDirectory(sysdir, MAX_PATH);
	TCHAR cldll[MAX_PATH];
	snprintf(cldll, MAX_PATH, "%s/OpenCL.dll", sysdir);
	clin_g_clmodule = LoadLibrary(cldll);
	if(clin_g_clmodule == NULL) {
		CLIN_LOG("ERROR: Could not load original OpenCL dll from %s", cldll);
	}
	CLIN_LOG("Init: loaded original dll %s", cldll);
}
void clin_platform_end() {
}

void* clin_get_orig_fun(const char* name) {
	if(clin_g_clmodule == NULL) {
		CLIN_LOG("ERROR: Trying to load original function but library module isn't loaded");
		return NULL;
	}
	void* funptr = GetProcAddress(clin_g_clmodule, name);
	if(funptr == NULL) {
		CLIN_LOG("ERROR: Could not load function %s in original library", name);
	}
	CLIN_LOG("Init: loaded original function %s", name);
	return funptr;
}

double clin_get_perf_freq() {
	static LARGE_INTEGER perffreq = { 0 };
	if(perffreq.QuadPart == 0) QueryPerformanceFrequency(&perffreq);
	return (double)perffreq.QuadPart;
}

double clin_get_timestamp() {
	static LARGE_INTEGER initcount = { 0 };
	if(initcount.QuadPart == 0) QueryPerformanceCounter(&initcount);

	LARGE_INTEGER perfcount;
	QueryPerformanceCounter(&perfcount);
	return (perfcount.QuadPart - initcount.QuadPart)*1000.0 / clin_get_perf_freq();
}

BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch(ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		clin_init();
		break;
	case DLL_THREAD_ATTACH: break;
	case DLL_THREAD_DETACH: break;
	case DLL_PROCESS_DETACH:
		clin_end();
		break;
	}
	return TRUE;
}
