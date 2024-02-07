#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x, y;
} POINT;

typedef struct line {
	POINT* start, *end;
} LINE;

int main()
{
	POINT p1 = { 10, 8 }, p2 = { 20, 40 };
	LINE line = { &p1, &p2 };

	printf("start x : %d, start y : %d\n", line.start->x, line.start->y);
	printf("end x : %d, end y : %d\n", line.end->x, line.end->y);

	return 0;
}