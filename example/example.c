#include <stdio.h>
#include <stdlib.h>

#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif

#include <CL/cl.h>

int main(void) {
	cl_uint num_platforms;
	clGetPlatformIDs(0, NULL, &num_platforms);
	cl_platform_id* platforms = (cl_platform_id*)alloca(sizeof(cl_platform_id) * num_platforms);
	clGetPlatformIDs(num_platforms, platforms, NULL);
	printf("Found %d platforms:\n", num_platforms);
	for(cl_uint i = 0; i < num_platforms; ++i) {
		size_t name_length;
		clGetPlatformInfo(platforms[i], CL_PLATFORM_NAME, 0, NULL, &name_length);
		char* name_buf = (char*)alloca(sizeof(char) * name_length);
		clGetPlatformInfo(platforms[i], CL_PLATFORM_NAME, name_length, name_buf, NULL);
		printf("\t%s\n", name_buf);
	}
	return EXIT_SUCCESS;
}
