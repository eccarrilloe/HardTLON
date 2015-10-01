#include "hardware_windows.h"

void getProcessorInformation() {
	SYSTEM_INFO proc;
	GetSystemInfo(&proc);
	printf("+------------------------------------------------+\n");
	printf("| \t\tProcessor Information \t\t |\n");
	printf("+------------------------------------------------+\n");
	printf("| Processor name: \t\t%u\t\t |\n", proc.dwNumberOfProcessors);
	printf("| Processor architecture: \t\t%s\t |\n", getProcessorName(proc));
	printf("| Number of processors: \t\t%u\t |\n", proc.dwNumberOfProcessors);
	printf("+------------------------------------------------+\n");
}

void getMemoryInformation() {
	MEMORYSTATUSEX memory;
	memory.dwLength = sizeof(memory);
	GlobalMemoryStatusEx(&memory);

	printf("+------------------------------------------------+\n");
	printf("| \t\tMemory Information \t\t |\n");
	printf("+------------------------------------------------+\n");
	printf("| Physical memory in use: \t\t%u%%\t |\n", memory.dwMemoryLoad);
	printf("| Total physical memory: \t\t%u MB\t |\n", memory.ullTotalPhys / 1048576);
	printf("| Total physical memory available: \t%u MB\t |\n", memory.ullAvailPhys / 1048576);
	printf("| Total virtual memory: \t\t%u MB\t |\n", memory.ullTotalPhys / 1048576);
	printf("| Total virtual memory available: \t%u MB\t |\n", memory.ullAvailPhys / 1048576);
	printf("+------------------------------------------------+\n");
}

void getDisplayInformation() {
	RECT desktop;
	const HWND hDesktop = GetDesktopWindow();
	GetWindowRect(hDesktop, &desktop);
	int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);

	printf("+------------------------------------------------+\n");
	printf("| \t\tDisplay Information \t\t |\n");
	printf("+------------------------------------------------+\n");
	printf("| Screen resolution - height: \t\t%u px\t |\n", height);
	printf("| Screen resolution - width: \t\t%u px\t |\n", width);
	printf("+------------------------------------------------+\n");
}

void getHardDiskInformation() {

}

char* getProcessorName(SYSTEM_INFO sys) {
	char buffer[256];
	char *processor= buffer;

	switch(sys.wProcessorArchitecture) {
		case PROCESSOR_ARCHITECTURE_INTEL: processor = "Intel"; break;
		case PROCESSOR_ARCHITECTURE_MIPS: processor = "MIPS"; break;
		case PROCESSOR_ARCHITECTURE_ALPHA: processor = "Alpha"; break;
		case PROCESSOR_ARCHITECTURE_PPC: processor = "PPC"; break;
		case PROCESSOR_ARCHITECTURE_SHX: processor = "SHx"; break;
		case PROCESSOR_ARCHITECTURE_ARM: processor = "ARM"; break;
		case PROCESSOR_ARCHITECTURE_IA64: processor = "IA64"; break;
		case PROCESSOR_ARCHITECTURE_ALPHA64: processor = "Alpha64"; break;
		case PROCESSOR_ARCHITECTURE_MSIL: processor = "MSIL"; break;
		case PROCESSOR_ARCHITECTURE_AMD64: processor = "AMD64"; break;
		case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64: processor = "IA32/WIN64"; break;
		case PROCESSOR_ARCHITECTURE_UNKNOWN: processor = "Unknow"; break;
	}
	return processor;
}