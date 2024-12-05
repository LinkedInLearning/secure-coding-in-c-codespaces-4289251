#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[16];
	int a;

	printf("Type an integer: ");
	fgets(input,16,stdin);
	a = atoi(input);
	printf("Double %d is %d\n",a,a+a);

	return 0;
}
