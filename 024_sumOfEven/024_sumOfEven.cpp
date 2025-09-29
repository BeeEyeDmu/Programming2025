// n이하의 짝수의 합
#include <stdio.h>

int main()
{
	int sum = 0;
	int i = 1;
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	while (i <= n) {
		if (i % 3 == 1)	// 3의 배수
			sum += i;
		i++;
	}

	printf("%d\n", sum);
}