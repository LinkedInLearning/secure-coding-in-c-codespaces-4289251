#include <stdio.h>
#include <math.h>

int main()
{
	float ex;

	for( ex=-1.0; ex<1.0; ex+=0.2)
	{
		printf("2 to the %.1f power is %.2f\n",
				ex,
				pow(2,ex)
			  );
	}

	return 0;
}
