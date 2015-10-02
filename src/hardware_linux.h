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

	#ifndef STRUCTURES_H_
        #include "structures.h"
    #endif

    struct *cpuInfo getCpuInfo() {};
    struct *monitorInfo getMonitorInfo() {};
    struct *hardDriveInfo getHardDriveInfo() {};
    struct *partitionInfo getPartitionInfo() {};
    struct *memoryInfo getMemoryInfo() {};
    struct *memoryChipInfo getMemoryChipInfo() {};
    struct *batteryInfo getBatteryInfo() {};

#endif
