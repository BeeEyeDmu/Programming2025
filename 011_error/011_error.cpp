#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;

	a = (0.3 * 3) + 0.1;	// 1.0일 듯
	b = 1;

	printf("%.20lf %.20lf\n", a, b);

	printf("(a == b) = %d\n", a == b);	// 오차때문에 0으로 출력

	printf("(fabs(a-b) < 0.00001) = %d", fabs(a - b) < 0.00001);
}