#include <stdio.h>
#define SIZE	5

int main()
{
	int score[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("성적 입력 : ");
		scanf_s("%d", &score[i]);
	}

	int sum = 0;
	// 5개의 합을 구하고 5로 나누어서 평균을 출력한다
	for (int i = 0; i < SIZE; i++)
		sum += score[i];

	printf("sum = %d, avg = %.2f\n", sum, (float)sum / SIZE);
}