#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[26];
	char a;
	int x;

	/* fill the string */
	for( x=0,a='A'; a<='Z'; a++,x++ )
		buffer[x] = a;
	buffer[x] = '\0';

	/* show the results */
	printf("'%s' created\n",buffer);

	return 0;
}
