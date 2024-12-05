#include <stdio.h>
#include <stdlib.h>

#define SIZE 24

int main()
{
	char input[SIZE];
	char output[SIZE];
	char *r;
	int a,b;
	float winnings;

	printf("Enter your lotto winnings: $");

	r = fgets(input,SIZE,stdin);
	/* validate fgets string */
	if( r==NULL )
	{
		fprintf(stderr,"Null string input\n");
		exit(1);
	}

	/* massage input */
	a = b = 0;
	while( input[a] != '\0' )
	{
		/* terminate upon newline */
		if( input[a]=='\n' )
		{
			output[b]='\0';
			break;
		}
		/* filter out commas */
		if( input[a]==',' )
		{
			a++;	/* skip the comma */
			continue;
		}
		output[b] = input[a];
		b++;
		a++;
	}

	/* translate to a float */
	winnings = strtof(output,&r);
	if( r==output )
	{
		fprintf(stderr,"Invalid input\n");
		exit(1);
	}

	/* deal with negative values */
	if( winnings < 0 )
	{
		puts("Negative winnings aren't taxed");
		exit(0);
	}

	/* display result after taxes */
	winnings*=0.55;
	printf("After taxes, that's $%.2f\n",winnings);

	return 0;
}
