#include <stdio.h>

int main()
{
	char text[] = "I love my programmer\n";
	char *t;

	t = text;
	while( *t != '\0' )
	{
		putchar(*t);
		t++;
	}

	return(0);
}
