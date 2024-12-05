#include <stdio.h>

int main()
{
	char buffer[64];

	printf("Your name: ");
	fgets(buffer,64,stdin);
	printf("Hello, %s\n",buffer);

	return 0;
}
