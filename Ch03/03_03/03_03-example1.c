#include <stdio.h>

int main()
{
	char ch;

	printf("Type ~ to stop: ");
	while(1)
	{
		ch = getchar();
		if( ch=='~' )
			break;
		putchar(ch);
	}

	return(0);
}
