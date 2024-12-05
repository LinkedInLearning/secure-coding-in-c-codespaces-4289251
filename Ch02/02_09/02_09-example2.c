#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "sample.txt";
	char buffer[64];
	int r;
	FILE *fp;

	/* open the file */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open %s\n",filename);
		exit(1);
	}

	/* process input one line at a time */
	while(1)
	{
		fgets(buffer,64,fp);
		printf("%s",buffer);
		if( feof(fp) != 0 )
			break;
	}

	/* clean up */
	r = fclose(fp);
	if( r==EOF ) perror("File closing error");
	return 0;
}
