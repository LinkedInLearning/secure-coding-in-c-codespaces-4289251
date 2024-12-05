#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "output.txt";
	FILE *fp;
	int r;

	fp = fopen(filename,"w");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to create %s\n",filename);
		exit(1);
	}

	r = fclose(fp);
	if( r!=0)
		perror("Error closing file: ");

	puts("File created");

	return 0;
}
