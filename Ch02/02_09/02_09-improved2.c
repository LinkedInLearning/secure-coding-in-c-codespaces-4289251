#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "sample.txt";
	char buffer[64];
	char *b;
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
		b = fgets(buffer,64,fp);
		if( b==NULL )
		{
			if( feof(fp) != 0 )
				break;
			else
				perror("File read error");
		}
		printf("%s",buffer);
	}

	/* clean up */
	r = fclose(fp);
	if( r==EOF ) perror("File closing error");
	return 0;
}
