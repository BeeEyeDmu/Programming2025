#include <stdio.h>

int main()
{
	int i = 0;	// 반복변수
	int sum = 0;
	int n;	// 입력값

	while (i < 5) {
		printf("입력 : ");
		scanf_s("%d", &n);
		sum += n;
		i++;
	}

	printf("%d\n", sum);
}