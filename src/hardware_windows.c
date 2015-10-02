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
	char *response = (char*) malloc(sizeof(char) * 255);

	FILE *fp = popen(command , "r");
	if (fgets(response, MAX_LENGTH, fp) == NULL) {

	}
	printf("%s\n", response);
	pclose(fp);

	return response;
}


int main() {
	char command[255] = "wmic cpu get caption /format:list";
	printf("Resultado: %s", getCommandReturnInfo(command));
	return 0;
}