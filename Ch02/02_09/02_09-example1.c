#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "sample.txt";
	int inch;
	FILE *fp;

	/* open the file */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open %s\n",filename);
		exit(1);
	}

	/* process input one character at a time */
	while(1)
	{
		inch = fgetc(fp);
		if( inch==EOF )
			break;
		putchar(inch);
	}

	/* clean up */
	fclose(fp);
	return 0;
}
