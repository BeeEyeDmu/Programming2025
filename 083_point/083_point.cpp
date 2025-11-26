#include <stdio.h>
#include <math.h>

// 두 점의 좌표를 입력받아서 
// 두 점 사이의 거리를 출력하시오

struct point {
	int x;
	int y;
};

int main()
{
	struct point p1, p2;

	printf("첫번째 점(x, y) : ");

	printf("두번째 점(x, y) : ");

	printf("두 점의 좌표 : (%d, %d) - (%d, %d)\n",
		p1.x, p1.y, p2.x, p2.y);

	printf("두 점 사이의 거리 : %.2f\n", );
}