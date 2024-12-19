#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "sample.txt";
	int inch,r;
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
		{
			/* confirm end-of-file pointer */
			if( feof(fp) != 0 )
				/* EOF confirmed, so continue */
				break;
			else
			{
				/* check error conditions */
				r = ferror(fp);
				if( r == 0 )
					/* no error */
					break;
				else
				{
					/* error occurred */
					fprintf(stderr,"File error in %s\n",filename);
					exit(1);
				}
			}
		}
		putchar(inch);
	}

	/* clean up */
	r = fclose(fp);
	if( r==EOF ) perror("File closing error");
	return 0;
}
