#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 6; i++)
		printf("%d ", 1 + (rand() % 45));
	printf("\n");
}