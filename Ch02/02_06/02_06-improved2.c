#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned char a = 0;

	while( a<=SCHAR_MAX )
	{
		printf(" %3d",a);
		a++;
	}
	putchar('\n');

	return(0);
}

