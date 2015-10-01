#ifndef INCLUDES_H_
	#define INCLUDES_H_
	#include <stdio.h>
	
	
	#if defined(_WIN64)||(_WIN32)||(_WIN16)
		#include "src\hardware_windows.h"
	
	#elif defined(_gnu_linux_)|| defined(__linux__)
		#include "src/hardware_linux.h"
	#endif
#endif
