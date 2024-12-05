#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int bsize = 27;
	char *buffer;
	int a;

	/* dynamically allocate string */
	buffer = malloc( sizeof(char) * bsize );
	if( buffer==NULL )
	{
		fprintf(stderr,"Unable to allocate %d piddly bytes\n",bsize);
		exit(1);
	}

	/* fill the string */
	for( a=0; a<bsize-1; a++ )
		*(buffer+a) = 'A'+a;
	/* terminate the string */
	*(buffer+a) = '\0';

	/* show the results */
	printf("'%s' created\n",buffer);

	/* clean-up */
	free(buffer);
	return 0;
}
