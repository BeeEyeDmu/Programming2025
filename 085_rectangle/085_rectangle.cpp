#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
} Point;

//struct rect {
//	struct point p1;
//	struct point p2;
//};

struct rect {
	Point p1;
	Point p2;
};

typedef struct rect Rect;

int main()
{
	//struct rect r;
	Rect r;

	printf("사각형 좌상 좌표 : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("사각형 우하 좌표 : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int w = r.p2.x - r.p1.x;
	int h = r.p2.y - r.p1.y;

	printf("면적 : %d\n", w * h);
	printf("둘레 : %d\n", 2*(w + h));
}