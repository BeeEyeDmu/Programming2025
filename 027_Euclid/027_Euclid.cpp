#include<stdio.h>

int main()
{
	int x, y, r;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r; 
	}

	printf("GCD = %d\n", x);
}