#include <stdio.h>

int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, factorial(n));
}