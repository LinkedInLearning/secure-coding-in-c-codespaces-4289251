#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,a;

	p = malloc( sizeof(int) * 10 );

	printf("10 pointers allocated at location %p\n",p);
	for( a=0; a<10; a++)
		printf("%d\n",*(p+a) );

	/* clean-up */
	free(p);
	return 0;
}
