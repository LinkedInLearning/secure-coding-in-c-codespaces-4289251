#include <stdio.h>

int main()
{
	int array[] = { 100, 200, 300 };
	int x;

	for( x=0; x<10; x++ )
		printf("Element %d is %d\n",x,array[x]);

	return(0);
}
