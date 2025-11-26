#include <stdio.h>

int isPrime(int n);

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++) {
		if (isPrime(i) == 1)
			printf("%d ", i);
	}

	printf("\n");

	//if (isPrime(n) == 1)
	//	printf("%d : 소수\n", n);
	//else
	//	printf("%d : 소수 아님\n", n);
}

int isPrime(int n)
{
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;	// 소수 아님
	}

	return 1;
}