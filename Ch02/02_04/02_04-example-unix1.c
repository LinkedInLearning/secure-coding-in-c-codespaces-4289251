#include <stdio.h>
#include <stdlib.h>

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
