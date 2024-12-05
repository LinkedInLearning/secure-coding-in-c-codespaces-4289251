#include <stdio.h>

int main()
{
	int age,r;

	printf("Your age: ");
	r = scanf("%d",&age);
	if( r==0 )
		puts("Invalid input");
	else
		printf("You will be %d years old next year\n",age+1);

	return 0;
}
