#include <stdio.h>

int main()
{
	int a,b;

	b = -8;

	if( (a=b) )
		printf("Value %d assigned\n",b);
	else
		puts("Value is zero");

	return(0);
}
