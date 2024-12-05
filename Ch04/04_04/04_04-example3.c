#include <stdio.h>
#include <string.h>

int main()
{
	char last[] = "Washington";
	char first[] = "George ";

	strcat(first,last);
	printf("Hello, %s\n",first);

	return 0;
}
