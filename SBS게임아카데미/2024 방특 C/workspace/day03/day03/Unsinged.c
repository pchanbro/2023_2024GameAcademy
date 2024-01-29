#include <stdio.h>
#include <stdint.h> // 정수 타입들을 표현, 

int main()
{
	int a = 10;
	printf("int : %d, size : %d\n", a, sizeof(int));

	unsigned int b = -10; // underflow
	unsigned int c = 4200000000;
	printf("unsigned int : %u %u\n", b, c);

	signed char d = 'a';
	printf("signed char : %d, size : %d\n", d, sizeof(signed char));

	unsigned char e = 200; // 원래 char의 범위는 127 인데 unsigned char 이기에 255까지 가능
	printf("unsigned char : %u\n", e); 

	short int f = 32000;
	printf("short in : %hd\n", f);

	unsigned short int g = 64000;
	printf("unsigned short int : %hu, size : %d\n", g, sizeof(unsigned short int));

	long long int h = 10000000000; // long int는 4BYTE long long int가 8BYTE
	// long int로는 100억 출력 불가능
	printf("long int : %lld, size : %d\n", h, sizeof(long long int));

	unsigned long long int i = 1800000000000000000;
	printf("unsigned long long int : %lld size : %d\n", i, sizeof(unsigned long long int));

	uint64_t j = 18000000000000000;
	printf("uint64_t : %ju, size : %d\n", j, sizeof(uint64_t));

	int32_t k = 2000000000;
	printf("int32_t : %d, size : %d\n", k, sizeof(int32_t));

	double l = 3.1415926;
	printf("double : %lf, size : %d\n", l, sizeof(double));

	long double m = 3.1415926;
	printf("long double : %Lf, size : %d\n", m, sizeof(long double));

	return 0;
}