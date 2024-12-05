#include <stdio.h>

int main()
{
	const char filename[] = "output.txt";
	FILE *fp;

	fp = fopen(filename,"w");
	fclose(fp);

	puts("File created");

	return 0;
}
