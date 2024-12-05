#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *base,*a;
	int x;

	/* allocate pointer */
	base = malloc( sizeof(int) * 10);
	if( base==NULL )
	{
		fprintf(stderr,"Memory allocation error\n");
		exit(1);
	}

	/* fill buffer */
	a = base;		 /* save the base */
	for( x=0; x<10; x++)
	{
		*a = x*20;
		a++;
	}

	/* output buffer */
	a = base;		 /* save the base */
	for( x=0; x<10; x++)
	{
		printf("%d\n",*(a+x));
	}

	/* clean-up */
	free(base);
	return 0;
}
