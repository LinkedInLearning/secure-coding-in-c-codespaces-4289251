#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int bsize = 27;
	char buffer[bsize];
	char a;

	/* fill the string */
	for( a='A'; a<='Z'; a++ )
		buffer[a-'A'] = a;
	buffer[a-'A'] = '\0';

	/* show the results */
	printf("'%s' created\n",buffer);

	return 0;
}
