#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Copy me!";
	char dst[] = "..............";

	strncpy(dst,src,10);
	printf("Final string: '%s'\n",dst);

	return 0;
}
