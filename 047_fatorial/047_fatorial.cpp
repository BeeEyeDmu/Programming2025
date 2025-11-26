#include <stdio.h>

// 1부터 n까지 곱하기
long long factorial(int n) {
	long long fact = 1;

	for (int i = 1; i <= n; i++)
		fact *= i;

	return fact;
}

// n을 입력받아 1!부터 n!까지 출력하기
int main() 
{
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);
	 
	// factorial 함수를 이용하여 n!을 계산하고 출력하기
	for(int i=1; i<=n; i++)
		printf("%2d! = %20lld\n", i, factorial(i));
}