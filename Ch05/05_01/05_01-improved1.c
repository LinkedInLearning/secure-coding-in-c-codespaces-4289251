#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,a;

	/* allocate and confirm storage */
	p = malloc( sizeof(int) * 10 );
	if( p==NULL )
	{
		fprintf(stderr,"Unable to initialize memory\n");
		exit(1);
	}

	/* output the buffer */
	printf("10 pointers allocated at location %p\n",p);
	for( a=0; a<10; a++)
	{
		*(p+a) = a*20;
		printf("%d\n",*(p+a) );
	}

	/* clean-up */
	free(p);
	return 0;
}
