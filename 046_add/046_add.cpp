#include <stdio.h>

// 두개의 정수를 입력받아 합을 계산하는 프로그램
// 합은 함수로 만든다

int sum(int x, int y)
{
	return x + y;
}

int main()
{
	int x, y;

	printf("두 정수 : ");
	scanf_s("%d %d", &x, &y);

	printf("합 = %d\n", sum(x, y));
}