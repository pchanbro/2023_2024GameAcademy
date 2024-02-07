#include <stdio.h>

typedef struct point {
	int x, y;
} POINT;

void f(POINT* p) {
	if (p->x > p->y)
		p->y = p->x;
	else
		p->x = p->y;
}

void print(POINT p) {
	printf("%d %d\n", p.x, p.y);
}

int main()
{
	POINT p1 = { 33, 66 }, p2 = { 6, 3 };

	f(&p1);
	f(&p2);
	print(p1);
	print(p2);
}