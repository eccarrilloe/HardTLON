#ifndef HARDWARE_H_
    #define HARDWARE_H_
    #include <stdio.h>
    #include <tchar.h>
    #include <windows.h>
    #include <wbemidl.h>
    #include "structures.h"

    #define _WIN32_WINNT 0x0400
    #define _WIN32_DCOM
    #define MAX_LENGTH 255

    CpuInfo *getCpuInfo();
    MonitorInfo *getMonitorInfo();
    HardDriveInfo *getHardDriveInfo();
    PartitionInfo *getPartitionInfo();
    MemoryInfo *getMemoryInfo();
    MemoryChipInfo *getMemoryChipInfo();
    BatteryInfo *getBatteryInfo();

#endif