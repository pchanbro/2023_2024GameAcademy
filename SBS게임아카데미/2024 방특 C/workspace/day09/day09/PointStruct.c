#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x, y;
} POINT;

int main()
{
	struct point p[3];
	for (int i = 0; i < 3; i++)
	{
		printf("x, y ют╥б >>> ");
		//scanf("%d %d", &p[i].x, &p[i].y);
	}
	for (int i = 0; i < sizeof(p) / sizeof(struct point); i++)
	{
		printf("x = %d, y = %d\n", p[i].x, p[i].y);
	}
	printf("sizeof(p) = %zd\n", sizeof(p));
	printf("sizeof(sp) = %zd\n", sizeof(struct point));

	struct point p2 = { 10, 20 };
	struct point* q2 = &p2;

	printf("p2 : %d, %d\n", p2.x, p2.y);
	(*q2).x = 30;
	printf("p2 : %d, %d\n", p2.x, p2.y);
	q2->y = 50;
	printf("p2 : %d, %d\n", p2.x, p2.y);

	(p + 1)->x = 10;
	(p + 1)->y = 20;
	printf("p[1] : %d, %d\n", p[1].x, p[1].y);

	POINT p3 = { 30, 40 };
	POINT* q3 = &p3;
	printf("p3 : %d %d\n", q3->x, q3->y);
	return 0;
}