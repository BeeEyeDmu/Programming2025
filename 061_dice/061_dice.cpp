#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TIMES 1000
int main()
{
	int dice[7] = { 0 };	// index가 0~6까지, 주사위 1~6까지

	srand(unsigned(time(NULL)));

	for (int i = 0; i < TIMES; i++) {
		dice[rand() % 6 + 1]++;
	}

	for (int i = 1; i <= 6; i++)
		printf("주사위[%d] = %d번\n", i, dice[i]);
}