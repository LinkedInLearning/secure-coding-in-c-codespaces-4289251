#include <stdio.h>

int main()
{
	char buffer[64];
	int x;

	printf("Your name: ");
	fgets(buffer,64,stdin);
	/* scan for and remove the newline */
	for( x=0; x<64; x++ )
	{
		if( buffer[x]=='\n' )
		{
			buffer[x] = '\0';
			break;
		}
	}

	printf("Hello, %s\n",buffer);

	return 0;
}
