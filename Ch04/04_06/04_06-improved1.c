#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

int main()
{
	char filename[] = "access.txt";
	FILE *fp;
	char pin[SIZE],input[SIZE];
	char *r;
	int x,fr;
	
	/* obtain PIN */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open %s\n",filename);
		exit(1);
	}
	r = fgets(pin,SIZE,fp);
	if( r==NULL )
	{
		fprintf(stderr,"Bad file read\n");
		exit(1);
	}
	fr = fclose(fp);
	if( fr!=0 )
	{
		perror("Error closing file: ");
	}

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
		/* zero out pint and input */
		for( x=0; x<SIZE; x++)
		{
			input[x] = '\0';
			pin[x] = '\0';
		}
		puts("Access granted");
	}
	else
	{
		puts("Intruder alert!");
	}

	return(0);
}
