#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

int main()
{
	char pin[] = "12345";
	char input[SIZE];
	char *r;

	/* fetch input */
	printf("Enter your PIN: ");
	r = fgets(input,SIZE,stdin);
	if( r==NULL )
	{
		fprintf(stderr,"Invalid input\n");
		exit(1);
	}

	/* validate */
	if( strcmp(input,pin)==0 )
	{
		puts("Access granted");
	}
	else
	{
		puts("Intruder alert!");
	}

	return 0;
}
