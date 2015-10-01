#include "hardware_linux.h"
struct sysinfo si;

void getProcessorInformation()
{
	sysinfo (&si);
	/*
	printf ("system uptime : %ld days, %ld:%02ld:%02ld\n", 
		si.uptime / day, (si.uptime % day) / hour, 
		(si.uptime % hour) / minute, si.uptime % minute);
	*/
	printf("Number of precessors availables: %d\n", get_nprocs());
}

void getMemoryInformation()
{
	double mb = 1048576;
	printf("total Free RAM %.3f MB\n", si.totalram / mb);
}

void getDisplayInformation(){}
void getHardDiskInformation(){}
