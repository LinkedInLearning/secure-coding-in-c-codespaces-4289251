#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "George Washington";
	char buffer[10];

	strcpy(buffer,name);
	printf("%s meet %s\n",name,buffer);

	return 0;
}
