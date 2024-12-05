#include <stdio.h>

int main()
{
	const int size = 3;
	int array[] = { 100, 200, 300 };
	int e = 53;

	if( e >= size )
		printf("Element %d is out of range\n",e);
	else
		printf("Element %d is %d\n",e,array[e]);

	return(0);
}
