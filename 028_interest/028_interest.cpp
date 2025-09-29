#include<stdio.h>

int main()
{
	long long money = 10;
	int day = 1;
		
	while (day <= 30) {
		printf("day %2d: %lld\n", day, money);
		money *= 2;
		day++;
	}

}