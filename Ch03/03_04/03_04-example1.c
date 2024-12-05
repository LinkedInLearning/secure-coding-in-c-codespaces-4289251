#include <stdio.h>

int main()
{
	char buffer[64];

	printf("Your name: ");
	gets(buffer);
	printf("Hello, %s\n",buffer);

	return(0);
}
