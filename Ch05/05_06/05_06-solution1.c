#include <stdio.h>
#include <stdlib.h>

int get_number(void)
{
	/* size must account for newline otherwise the
	   newline is retained in the stream */
	const int size = 4;
	char *number,*r;
	int value,x;

	/* allocate storage for numeric input */
	number = malloc( sizeof(char) * size );
	if( number==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	/* obtain and verify input */
	r = fgets(number,size,stdin);
	if( r==NULL )
	{
		fprintf(stderr,"Input error\n");
		free(number);
		exit(1);
	}

	/* convert and verify value */
	value = strtol(number,&r,10);
	if( r==number )
	{
		fprintf(stderr,"Invalid input\n");
		free(number);
		exit(1);
	}

	/* verify the range 0 to 99 */
	if( value<0 || value>99 )
	{
		printf("%d is out of range\n",value);
		free(number);
		exit(1);
	}

	/* zero the string */
	for( x=0; x<4; x++)
		*(number+x) = '\0';
	/* free allocate storage */
	free(number);
	/* no need to NULL out the pointer as it's discarded
	   after the function is complete */
	return(value);
}

int main()
{
	int x,digit[3];

	puts("Valid digits are from 0 to 99");
	for( x=0; x<3; x++ )
	{
		printf("Enter digit #%d: ",x+1);
		digit[x] = get_number();
	}

	printf("The combination is:");
	for( x=0; x<3; x++ )
	{
		printf(" %02d",digit[x]);
		/* zero out the combination for security */
		digit[x] = 0;
	}
	putchar('\n');

	return 0;
}
