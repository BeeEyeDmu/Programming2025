#include <stdio.h>

int main()
{
	// 과일의 이름을 여러개(3개) 저장
	char fruits[3][11];

	for (int i = 0; i < 3; i++) {
		printf("과일 : ");
		scanf_s("%s", fruits[i], 11/*sizeof(fruits[i])*/);
	}

	for (int i = 0; i < 3; i++)
		printf("[%d] : %s\n", i, fruits[i]);
}