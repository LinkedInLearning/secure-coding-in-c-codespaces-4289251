#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[16];
	char *p;
	long a;

	printf("Type an integer: ");
	fgets(input,16,stdin);
	a = strtol(input,&p,10);
	if( p==input )
		puts("Invalid input");
	else
		printf("Double %ld is %ld\n",a,a+a);

	return(0);
}
