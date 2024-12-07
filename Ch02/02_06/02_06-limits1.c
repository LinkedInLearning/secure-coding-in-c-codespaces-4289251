#include <stdio.h>
#include <limits.h>

int main()
{
	printf("signed char %d/%d\n",			SCHAR_MIN,	SCHAR_MAX);
	printf("unsigned char %u/%u\n",			0,			UCHAR_MAX);
	printf("short int %d/%d\n",				SHRT_MIN,	SHRT_MAX);
	printf("unsigned short int %u/%u\n",	0,			USHRT_MAX);
	printf("int %d/%d\n",					INT_MIN,	INT_MAX);
	printf("unsigned int %u/%u\n",			0,			UINT_MAX);
	printf("long %ld/%ld\n",				LONG_MIN,	LONG_MAX);
	printf("unsigned long %lu/%lu\n",		0L,			ULONG_MAX);
	printf("long long %lld/%lld\n",			LLONG_MIN,	LLONG_MAX);
	printf("unsigned long long %llu/%llu\n",0LL,		ULLONG_MAX);

	return 0;
}
