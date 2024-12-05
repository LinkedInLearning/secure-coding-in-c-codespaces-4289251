#include <stdio.h>

#define SIZE 8

int main()
{
	char buffer[SIZE];
	int x;

	printf("Format command: ");
	fgets(buffer,SIZE,stdin);
	for( x=0; x<SIZE; x++)
	{
		/* remove the newline */
		if( buffer[x]=='\n')
		{
			buffer[x]='\0';
			break;
		}
	}
	printf("The value is '");
	printf(buffer,0x1234);
	printf("'\n");

	return 0;
}
