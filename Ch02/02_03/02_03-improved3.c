#include <stdio.h>

int main()
{
	char string[] = "Hello, there!\n";
	char *s;

	s = string;
	while( *s != '\0' )
	{
		putchar(*s);
		s++;
	}

	return(0);
}
