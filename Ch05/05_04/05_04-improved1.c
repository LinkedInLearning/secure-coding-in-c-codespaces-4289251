#include <stdio.h>
#include <stdlib.h>

void hello(void)
{
	const int size = 32;
	char *input,*r;

	/* allocate memory */
	input = malloc( sizeof(char) * size);
	if( input==NULL )
	{
		fprintf(stderr,"Unable to allocate memory");
		exit(1);
	}

	/* fetch input */
	r = fgets(input,size,stdin);
	if( r==NULL )
	{
		fprintf(stderr,"Invalid input\n");
		exit(1);
	}
	printf("Hello, %s\n",input);

	free(input);
}

int main()
{
	printf("Your name: ");
	hello();

	return 0;
}
