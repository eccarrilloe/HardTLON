#include "hardware_linux.h"
struct sysinfo si;
struct utsname unameData;
struct statvfs stat;
double mb = 1048576;

getMemFree()
{
	FILE* fp = fopen( "/proc/meminfo", "r" );
	if ( fp != NULL )
	{
		size_t bufsize = 1024 * sizeof(char);
		char* buf      = (char*)malloc( bufsize );
		long value     = -1L;
		while ( getline( &buf, &bufsize, fp ) >= 0 )
		{
			if ( strncmp( buf, "MemFree", 7 ) != 0 )
				continue;
			sscanf( buf, "%ld",&value );
			printf("%s", buf);
			break;
		}
		fclose( fp );
		free( (void*)buf );
		if ( value != -1L )
			return ((size_t)value * 1024L );
	}
}

void getProcessorInformation()
{
	// The Linux kernel has a sysinfo() system call since 0.98.pl6.
	sysinfo (&si);
	uname(&unameData);
	/*
	printf ("system uptime : %ld days, %ld:%02ld:%02ld\n", 
		si.uptime / day, (si.uptime % day) / hour, 
		(si.uptime % hour) / minute, si.uptime % minute);
	*/
	printf("/*******************************************************/\n");
	printf("Operating System:  %s\n", unameData.sysname);
	printf("Release:  %s\n", unameData.release);
	printf("Version:  %s\n", unameData.version);
	printf("Architecture:  %s\n", unameData.machine);
	printf("Number of precessors availables: %d\n", get_nprocs());
	printf("/*******************************************************/\n");
}	
 

void getMemoryInformation()
{
	printf("/*******************************************************/\n");

	printf("Total usable main memory size: \t %.3f MB\n", si.totalram / mb);
	getMemFree();
	//printf("Available memory size %.5f MB\n", si.freeram / mb);
	//printf("Amount of shared memory %.5f MB\n", si.sharedram / mb);
	//printf("Memory used by buffers %.5f MB\n", si.bufferram / mb);
	printf("Total swap space size: \t %.5f MB\n", si.totalswap / mb);
	printf("/*******************************************************/\n");
}

void getHardDiskInformation()
{
	// Chequea solo una de las particiones la raíz "/"
	// TODO Comprobar si hay más particiones del disco
	statvfs("/",&stat);
	printf("/*******************************************************/\n");
	//printf("Total space %.3f MB \n", stat.f_frsize /mb);
	printf("Total space %.3f MB\n", stat.f_bsize * stat.f_blocks /mb );
	printf("Total free space: %.3f MB\n", stat.f_bsize * stat.f_bfree /mb );
	printf("Free disk space for unprivileged users: %.3f MB\n", (stat.f_bsize * stat.f_bavail )/mb);
}

void getDisplayInformation(){}