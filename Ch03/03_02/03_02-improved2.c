#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	char value[] = "13211311123113112211";
	char *p;
	long long a;

	printf("Value string: %s\n",value);
	a = strtoll(value,&p,10);
	if( a==LONG_MAX )
	{
		puts("OVERFLOW");
	}
	else
	{
		if( p==value )
			puts("Invalid input");
		else
			printf("Value long long: %lld\n",a);
	}

	return 0;
}
