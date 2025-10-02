#include <stdio.h>

int main()
{
	// 3의 배수만 제외하고 출력하기
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	printf("\n");
}