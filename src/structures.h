#ifndef STRUCTURES_H_
    #define STRUCTURES_H_

    /**
     *
     * CPU Information
     * Windows: ....
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
     * Windows: ....
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
     * Windows: ....
     * Linux: .....
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
     * Windows: ....
     * Linux: .....
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
     * Windows: ....
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
     * Windows: ....
     * Linux: ....
     */
    typedef struct {
        int index;
        long int memoryChipTotalSize;
        int memoryChipSpeed;
    } MemoryChipInfo;

    /**
     *
     * OS Information
     * Windows: ....
     * Linux: ....
     *
     */
     typedef struct  {
        char *osName;
        int osArchitecture;
        char *osUsername;
        int osNumberOfProccess;
     } OSInfo;

    /**
     *
     * Battery Information
     * Windows: ....
     * Linux: ....
     *
     */
     typedef struct  {
        int batteryACLineStatus;
        int batteryLifeTime;
        double batteryLifePercent;
     } BatteryInfo;

     /**
     *
     * Devices Information
     * Windows: ....
     * Linux: ....
     *
     */
     typedef struct  {
        long int deviceId;
        char *deviceCaption;
        char *deviceType;
        char *deviceDescription;
     } DeviceInfo;

#endif
