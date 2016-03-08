#include "hardware_windows.h"

CpuInfo *getCpuInfo() {

}
MonitorInfo *getMonitorInfo() {

}
HardDriveInfo *getHardDriveInfo() {

}
PartitionInfo *getPartitionInfo() {

}
MemoryInfo *getMemoryInfo() {

}
MemoryChipInfo *getMemoryChipInfo() {

}
BatteryInfo *getBatteryInfo() {

}

char *getCommandReturnInfo(char *command) {
	char *response = (char*) malloc(sizeof(char) * MAX_LENGTH);


	FILE *fp = popen(command , "r");
	while(fgets(response, MAX_LENGTH, fp) != NULL)
        if (strcmp(response, "\0") > 13)) {


        }

	pclose(fp);

	return response;
}


int main() {
	char command[255] = "wmic cpu get caption /format:list";
	printf("Resultado: %s\n", getCommandReturnInfo(command));
	return 0;
}