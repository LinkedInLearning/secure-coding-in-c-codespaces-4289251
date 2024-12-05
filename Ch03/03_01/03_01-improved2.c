#include <stdio.h>

int main()
{
	float gas,r;

	printf("The price of gas: ");
	r = scanf("%f",&gas);
	if( r==0 )
		puts("Invalid input");
	else
		printf("Wow! %.2f for gas?\n",gas);

	return 0;
}
