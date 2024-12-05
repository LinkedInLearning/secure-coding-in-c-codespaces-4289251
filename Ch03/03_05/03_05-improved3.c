#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 64

int main()
{
	const char bad[] = "naughty";
	char input[SIZE];
	char *r;
	int x;

	printf("Command: ");
	fgets(input,SIZE,stdin);
	/* scan for bad command */
	r = strstr(input,bad);
	if( r!=NULL )
	{
		printf("Unallowed command detected\n");
		exit(1);
	}

	/* process the string; remove newline */
	for( x=0; x<SIZE; x++)
	{
		if( input[x]=='\n' )
		{
			input[x] = '\0';
			break;
		}
	}

	/* output command */
	printf("The command is '%s'\n",input);

	return 0;
}
