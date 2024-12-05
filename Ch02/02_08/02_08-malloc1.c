#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buf;

	/* allocate 32 bytes of storage */
	buf = malloc( sizeof(char) * 32 );
	if( buf==NULL )
	{
		fprintf(stderr,"Unable to allocate 32 bytes! Sheesh.\n");
		exit(1);
	}
	printf("32 bytes allocated\n");

	/* clean-up */
	free(buf);
	return 0;
}
