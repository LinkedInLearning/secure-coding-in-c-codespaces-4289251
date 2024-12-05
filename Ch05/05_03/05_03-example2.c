#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a;
	int x;

	/* allocate pointer */
	a = malloc( sizeof(int) * 10);
	if( a==NULL )
	{
		fprintf(stderr,"Memory allocation error\n");
		exit(1);
	}

	/* fill buffer */
	for( x=0; x<10; x++)
	{
		*a = x*20;
		a++;
	}

	/* output buffer */
	a-=10;
	for( x=0; x<10; x++)
	{
		printf("%d\n",*(a+x));
	}

	/* clean-up */
	free(a);
	return 0;
}
