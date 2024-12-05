#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *d;
	int a;

	/* allocate, initialize, and confirm storage */
	d = calloc( 4, sizeof(double) );
	if( d==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		return(0);
	}

	/* output the buffer */
	for( a=0; a<4; a++)
		printf("%f\n",*(d+a) );

	/* clean-up */
	free(d);
	return 0;
}
