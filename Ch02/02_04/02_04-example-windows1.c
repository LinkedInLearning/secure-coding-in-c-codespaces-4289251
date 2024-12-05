#include <stdio.h>
#include <stdlib.h>

#define WINDOWS

int main()
{
	puts("Calling the system:");
#ifdef WINDOWS
	system("dir");
#else	
	system("ls");
#endif
	puts("All done!");

	return(0);
}
