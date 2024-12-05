#include <stdio.h>

void alter(char *a)
{
	*(a+2) = 'r';
}

int main()
{
	char animal[] = "cat";

	printf("Turn the %s ",animal);
	alter(animal);
	printf("into a %s\n",animal);

	return 0;
}
