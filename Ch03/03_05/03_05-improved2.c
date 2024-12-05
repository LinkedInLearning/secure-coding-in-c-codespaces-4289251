#include <stdio.h>

#define SIZE 64

int main()
{
	char input[SIZE];
	char output[SIZE];
	int a,b;

	printf("Command: ");
	fgets(input,SIZE,stdin);
	for( a=0, b=0; a<SIZE; a++,b++)
	{
		/* remove newline */
		if( input[a]=='\n' )
		{
			output[b] = '\0';
			break;
		}
		/* Filter backslashes */
		if( input[a]=='\\' )
		{
			b--;
			continue;
		}
		output[b] = input[a];
	}

	/* output command */
	printf("The filtered command is '%s'\n",output);

	return 0;
}
