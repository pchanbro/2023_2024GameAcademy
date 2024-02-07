#include <stdio.h>
#include <stdint.h>

int main()
{
	int a = 10;
	printf("int: %d %d\n", a, sizeof(int));

	unsigned int b = 4200000000;
	printf("unsigned int: %u\n", b);

	signed char c = 'a';
	printf("signed char: %d %d\n", c, sizeof(signed char));

	unsigned char d = 200;
	printf("unsigned char: %u\n", d);

	short int e = 32000;
	printf("short int: %hd\n", e);

	unsigned short int f = 64000;
	printf("unsigned short int: %hu %d\n", f, sizeof(unsigned short int));

	long long int g = 10000000000;
	printf("long long int: %lld\n", g);

	unsigned long long int h = 18000000000000000000;
	printf("unsigned long long int: %llu %d\n", h, sizeof(unsigned long long int));

	uint64_t i = 18000000000000000000;
	printf("uint64_t: %ju %d\n", i, sizeof(i));

	int32_t j = 2000000000;
	printf("int32_t: %d\n", j);

	double k = 3.1415926;
	printf("double: %f %d\n", k, sizeof(k));

	long double l = 3.1415926;
	printf("long double: %Lf %d\n", l, sizeof(long double));
}