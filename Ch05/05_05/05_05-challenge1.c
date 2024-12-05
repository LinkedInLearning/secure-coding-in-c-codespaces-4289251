#include <stdio.h>
#include <stdlib.h>

int get_number(void)
{
}

int main()
{
	int x,digit[3];

	puts("Valid digits are from 0 to 99");
	for( x=0; x<3; x++ )
	{
		printf("Enter digit #%d: ",x+1);
		digit[x] = get_number();
	}

	printf("The combination is: ");
	for( x=0; x<3; x++ )
	{
		printf(" %02d",digit[x]);
	}
	putchar('\n');

	return 0;
}
