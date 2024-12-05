#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 8

int main()
{
	int ch;

	while(1)
	{
		printf("Choose output format: A) decimal, B) hex: ");
		ch = getchar();
		ch = toupper(ch);
		/* process proper keys only */
		if( ch=='A' || ch=='B' )
			break;
		/* bail on the EOF */
		if( ch==EOF )
			exit(1);
		/* chew through extra characters */
		while( ch!='\n' )
		{
			ch = getchar();
			if( ch==EOF )
				exit(1);
		}
	}

	printf("The value is ");
	if( ch=='A' )
		printf("The value is %d\n",0x1234);
	if( ch=='B' )
		printf("The value is %x\n",0x1234);

	return(0);
}
