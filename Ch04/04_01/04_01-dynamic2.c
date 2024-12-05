#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int bsize = 27;
	char *buffer;
	char a;
	int x;

	/* dynamically allocate string */
	buffer = malloc( sizeof(char) * bsize );
	if( buffer==NULL )
	{
		fprintf(stderr,"Unable to allocate %d piddly bytes\n",bsize);
		exit(1);
	}

	/* fill the string */
	for( x=0,a='A'; a<='Z'; a++,x++ )
		*(buffer+x) = a;
	*(buffer+x) = '\0';

	/* show the results */
	printf("'%s' created\n",buffer);

	/* clean-up */
	free(buffer);
	return 0;
}
