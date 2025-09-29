// 100만원을 매년 30% 수익을 올리면 10배가 되는 것은 몇년만인가?
#include <stdio.h>

int main()
{
	float money = 20000000;
	int year = 0;

	while (1) {
		money *= 1.3;	// 30%
		year++;
		if (money >= 200000000)
			break;
	}
	printf("%d년, %.1f원\n", year, money);
}