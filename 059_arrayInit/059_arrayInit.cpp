#include <stdio.h>

int b[10], d;  // 글로벌변수는 자동 초기화

int main()
{
	int a[10] = {0};
	int arr[] = { 10, 20, 30 };

	for (int i = 0; i < 10; i++)
		printf("%d\n", a[i]);

	for (int i = 0; i < 10; i++)
		printf("%d\n", b[i]);

	
}