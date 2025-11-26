#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5

void printArray(int a[][COLS], int row, int col);

int main()
{
	int a[ROWS][COLS];

	srand((unsigned)time(NULL));

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			a[i][j] = rand() % 100;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	printf("\n");
	printArray(a, ROWS, COLS);

}

void printArray(int a[][COLS], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}