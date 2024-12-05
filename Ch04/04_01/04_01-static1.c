#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int bsize = 27;
	char buffer[bsize];
	int a;

	/* fill the string */
	for( a=0; a<bsize-1; a++ )
		buffer[a] = 'A'+a;
	/* terminate the string */
	buffer[a] = '\0';

	/* show the results */
	printf("'%s' created\n",buffer);

	return 0;
}
