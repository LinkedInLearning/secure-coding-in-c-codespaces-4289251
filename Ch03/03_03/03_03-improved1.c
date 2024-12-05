#include <stdio.h>

int main()
{
	int ch;

	printf("Type ~ to stop: ");
	while(1)
	{
		ch = getchar();
		if( ch=='~' || ch==EOF )
			break;
		putchar(ch);
	}

	return(0);
}
