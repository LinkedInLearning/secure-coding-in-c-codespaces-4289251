#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int bsize = 26;
	char buffer[bsize];
	char a;

	/* fill the string */
	for( a='A'; a<='Z'; a++ )
		buffer[a] = a;

	/* show the results */
	printf("'%s' created\n",buffer);

	return 0;
}
