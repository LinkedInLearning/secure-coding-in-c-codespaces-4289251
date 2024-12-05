#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char first[] = "George ";
	char last[] = "Washington";
	char *buffer;

	/* allocate proper buffer size - plus one for the null character! */
	buffer = malloc(sizeof(char) * (strlen(first)+strlen(last)) + 1);
	if( buffer==NULL )
	{
		fprintf(stderr,"Unable to allocate buffer\n");
		exit(1);
	}

	strcpy(buffer,first);
	strcat(buffer,last);

	printf("Hello, %s\n",buffer);

	/* clean-up */
	free(buffer);
	return 0;
}
