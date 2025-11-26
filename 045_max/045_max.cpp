#include <stdio.h>

int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

// 두 수를 입력받아 더 큰 수를 출력하라
int main()
{
	//int larger = max(10, 20);
	//printf("%d\n", larger);

	printf("%d\n", max(10, 20));
}