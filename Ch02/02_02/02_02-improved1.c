#include <stdio.h>

int main()
{
	int a,b;

	b = -8;

	/* Assign `b` to `a` and test the
	   result (value of `b`) with zero */
	/*** DO NOT USE `a==b` HERE! ***/
	if( (a=b) != 0 )
		printf("Value %d assigned\n",b);
	else
		puts("Value is zero");

	return(0);
}
