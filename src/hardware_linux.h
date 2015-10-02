#ifndef HARDWARE_H_
	#define HARDWARE_H_
	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <sys/sysinfo.h>
	#include <sys/statvfs.h>
	#include <sys/utsname.h>
	#include <gdk/gdk.h>
	//#include <X11/Xlib.h>


	void getProcessorInformation();
	void getMemoryInformation();
	void getDisplayInformation();
	void getHardDiskInformation();
#endif
