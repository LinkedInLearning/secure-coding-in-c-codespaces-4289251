/* Challenge:
   Obtain a line of text from the user
   Write it to a file
*/   
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	int index;
	char ch;
	const char filename[] = "challenge.txt";
	FILE *fp;

	/* allocate storage for input */
	buffer = malloc( sizeof(char) * 32 );

	/* obtain input */
	printf("Type some text: ");
	index = 0;
	while( (ch=getchar()) )
	{
		*(buffer+index) = ch;
		index++;
		if( ch=='\n')
			break;
	}
	*(buffer+index) = '\0';		/* cap the string */

	/* save the buffer to a file */
	fp = fopen(filename,"w");
	fwrite(buffer,1,index,fp);
	fclose(fp);
	printf("%s created\n",filename);

	/* clean up */
	free(buffer);
	return 0;
}
