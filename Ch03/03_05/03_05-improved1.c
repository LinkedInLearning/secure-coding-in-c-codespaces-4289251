#include <stdio.h>

#define SIZE 64

int main()
{
	char input[SIZE];
	int x;

	printf("Command: ");
	fgets(input,SIZE,stdin);
	for( x=0; x<SIZE; x++)
	{
		/* remove newline */
		if( input[x]=='\n' )
		{
			input[x] = '\0';
			break;
		}
		/* Filter backslashes */
		if( input[x]=='\\' )
		{
			input[x] = '/';
			continue;
		}
	}

	/* output command */
	printf("The command is '%s'\n",input);

	return 0;
}
