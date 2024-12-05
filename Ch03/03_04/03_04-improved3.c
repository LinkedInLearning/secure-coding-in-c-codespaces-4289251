#include <stdio.h>

int main()
{
	char buffer[64];
	char *r;
	int x;

	printf("Your name: ");
	r = fgets(buffer,64,stdin);
	/* test for a null string */
	if( r==NULL )
	{
		puts("\nNO INPUT");
		return 1;
	}
	/* string valid - scan for and remove the newline */
	for( x=0; x<64; x++ )
	{
		if( buffer[x]=='\n' )
		{
			buffer[x] = '\0';
			break;
		}
	}

	printf("Hello, %s\n",buffer);

	return(0);
}
