#ifndef HARDWARE_H_
    #define HARDWARE_H_
    #include <stdio.h>

    #ifndef STRUCTURES_H_
        #include "structures.h"
    #endif

    #define MAX_LENGTH 255

    CpuInfo *getCpuInfo();
    MonitorInfo *getMonitorInfo();
    HardDriveInfo *getHardDriveInfo();
    PartitionInfo *getPartitionInfo();
    MemoryInfo *getMemoryInfo();
    MemoryChipInfo *getMemoryChipInfo();
    BatteryInfo *getBatteryInfo();

#endif