#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *alphabet;
	int a;

	alphabet = malloc( sizeof(char) * 27 );
	if( alphabet==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	for(a=0; a<26; a++)
		*(alphabet+a) = 'A'+a;
	/* terminate the string */
	*(alphabet+a) = '\0';

	printf("The alphabet: %s\n",alphabet);

	/* clean-up */
	free(aphabet);
	return 0;
}
