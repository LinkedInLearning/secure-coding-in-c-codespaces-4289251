#include <stdio.h>

int main()
{
	const char filename[] = "test.txt";
	const char data[] = "123456789\n";
	FILE *fp;
	int r;

	/* open file text.txt */
	fp = fopen(filename,"w");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to create %s\n",filename);
		return 1;
	}

	/* write 10 bytes to the file */
	r = fwrite(data,1,10,fp);
	if( r != 10 )
	{
		fprintf(stderr,"Wrote only %d bytes to %s\n",r,filename);
		fclose(fp);
		return 1;
	}
	printf("Wrote %d bytes to %s\n",r,filename);

	/* close file text.txt */
	r = fclose(fp);
	if( r != 0 )
	{
		perror("Unable to close file\n");
		return 1;
	}

	return 0;
}
