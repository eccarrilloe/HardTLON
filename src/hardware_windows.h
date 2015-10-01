#ifndef HARDWARE_H_
	#define HARDWARE_H_
	#define WINVER 0x0500
	#include <stdio.h>
	#include <windows.h>

	/** DEFINITIONS **/
	#define PROCESSOR_ARCHITECTURE_INTEL            0
	#define PROCESSOR_ARCHITECTURE_MIPS             1
	#define PROCESSOR_ARCHITECTURE_ALPHA            2
	#define PROCESSOR_ARCHITECTURE_PPC              3
	#define PROCESSOR_ARCHITECTURE_SHX              4
	#define PROCESSOR_ARCHITECTURE_ARM              5
	#define PROCESSOR_ARCHITECTURE_IA64             6
	#define PROCESSOR_ARCHITECTURE_ALPHA64          7
	#define PROCESSOR_ARCHITECTURE_MSIL             8
	#define PROCESSOR_ARCHITECTURE_AMD64            9
	#define PROCESSOR_ARCHITECTURE_IA32_ON_WIN64    10
	#define PROCESSOR_ARCHITECTURE_UNKNOWN          0xFFFF

	void getProcessorInformation();
	void getMemoryInformation();
	void getDisplayInformation();
	void getHardDiskInformation();

	char* getProcessorName(SYSTEM_INFO sys);
#endif