#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
	int a[SIZE];

	srand(unsigned(time(NULL)));	// 시드(seed) 설정

	//a[0] = 10;
	//a[1] = 20;
	//a[2] = 30;
	//a[3] = 40;
	//a[4] = 50;

	/*for (int i = 0; i < SIZE; i++)
		a[i] = (i + 1) * 10;*/

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 100;  // 0~32767(0~99)

	for (int i = 0; i < SIZE; i++)
		printf("%d\n", a[i]);
}