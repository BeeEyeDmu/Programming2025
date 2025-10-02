#include <stdio.h>

int main()
{
	double pi = 0;
	int sign = 1;

	for (int i = 1; i <= 10000000; i+=2) {
		pi += 4 * sign * 1.0 / i;
		sign = -sign;
	}

	printf("%f\n", pi);
}