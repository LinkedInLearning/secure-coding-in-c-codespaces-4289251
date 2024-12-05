#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[32];

	printf("Command: ");
	fgets(buffer,32,stdin);
	system(buffer);

	return(0);
}
