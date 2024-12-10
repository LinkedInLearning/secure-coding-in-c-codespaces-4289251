#include <stdio.h>

int main()
{
	const char filename[] = "test.txt";
	char buffer[16];
	int r;
	FILE *fp;

	/* open file text.txt */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open %s\n",filename);
		return(1);
	}

	/* read 16 bytes from the file */
	r = fread(buffer,1,16,fp);
	if( r!= 16 )
	{
		if( feof(fp) )
			printf("Read %d bytes from %s\n",r,filename);
		else
		{
			r = ferror(fp);
			printf("Error: ferror() returned %d\n",r);
		}
	}

	/* close file text.txt */
	r = fclose(fp);
	if( r != 0 )
	{
		perror("Unable to close file\n");
		return 1;
	}

	return 0;
}
