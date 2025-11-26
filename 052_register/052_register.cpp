#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i < 1000000; i++)
		sum += i;

	printf("sum = %d\n", sum);
}