#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	float ex;

	ex = -1.0;
	for( x=0; x<10; x++)
	{
		printf("2 to the %.1f power is %.2f\n",
				ex,
				pow(2,ex)
			  );
		ex += 0.2;
	}

	return 0;
}
