#include <stdio.h>

int main()
{
	FILE *fp;
	int r;

	/* open file text.txt */
	fp = fopen("test.txt","r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open that file!\n");
		return(1);
	}
	printf("File opened\n");

	/* close file text.txt */
	r = fclose(fp);
	if( r != 0 )
	{
		perror("Unable to close file\n");
		return(1);
	}

	return(0);
}
