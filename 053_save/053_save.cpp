#include <stdio.h>

void save(int amount)
{
	static int balance = 0;

	balance += amount;
	printf("%d\t%d\n", amount, balance);
}

int main()
{
	printf("=================\n");
	printf("입금\t잔고\n");
	printf("=================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("=================\n");
}