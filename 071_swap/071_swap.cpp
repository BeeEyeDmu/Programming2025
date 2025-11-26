#include <stdio.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 100;
	int b = 200;

	swap(a, b);
	printf("a = % d, b = % d\n", a, b);

	swap2(&a, &b);
	printf("a = % d, b = % d\n", a, b);
}