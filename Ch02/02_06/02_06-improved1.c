#include <stdio.h>

int main()
{
	unsigned char a;
	int b;
	long c;

	for( b=120; b<=135; b++)
	{
		c = a = b;
		printf("%4d %4d %4ld\n",a,b,c);
	}

	return(0);
}
