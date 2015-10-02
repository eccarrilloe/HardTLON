#ifndef STRUCTURES_H_
    #define STRUCTURES_H_

    /**
     *
     * CPU Information
     * Windows: Getting from WMIC cpu
     * Linux: ....
     *
     */
    typedef struct {
        char *processorCaption;
        char *processorArchitecture;
        char *processorStatus;
        int processorLogicalCores;
        long double processorMaxClockSpeed;
    } CpuInfo;

    /**
     *
     * Monitor Information
     * Windows: Getting from WMIC desktopmonitor
     * Linux: ....
     *
     */
    typedef struct {
        char *monitorCaption;
        char *monitorStatus;
        long int monitorScreenHeight;
        long int monitorScreenWidth;
    } MonitorInfo;

    /**
     *
     * Physical Hard Drives
     * Windows: Getting from WMIC driskdrive
     * Linux: ....
     *
     */
    typedef struct {
        char *hardDriveCaption;
        char *hardDriveStatus;
        int hardDriveNumberOfPartitions;
        long int hardDriveSize;
        long int hardDriveFreeSize;
        struct partitionInfo* hardDrivePartitions;
    } HardDriveInfo;

    /**
     *
     * Logical Partitions Information
     * Windows: Getting from WMIC partition
     * Linux: ....
     *
     */
    typedef struct {
        char *partitionCaption;
        int partitionIndex;
        long int partitionSize;
    } PartitionInfo;

    /**
     *
     * RAM Information
     * Windows: Getting from WMIC os
     * Linux: ....
     */
    typedef struct {
        int memoryNumberOfChips;
        struct memoryChipInfo *memoryChips;
        long int memoryTotalSize;
        long int memoryTotalVirtualSize;
        long int memoryFreeSize;
        long int memoryFreeVirtualSize;

    } MemoryInfo;

    /**
     *
     * RAM Chip Information
     * Windows: Getting from WMIC memorychip
     * Linux: ....
     */
    typedef struct {
        int index;
        long int memoryChipTotalSize;
        int memoryChipSpeed;
    } MemoryChipInfo;

    /**
     *
     * Battery Information
     * Windows:
     * Linux: ....
     *
     */
     typedef struct  {
        int batteryACLineStatus;
        int batteryLifeTime;
        double batteryLifePercent;
     } BatteryInfo;

#endif
