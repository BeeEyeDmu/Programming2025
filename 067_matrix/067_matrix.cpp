#include <stdio.h>

void sum(int a[][4], int b[][4], int c[][4])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void printArray(int a[][4], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int b[3][4] = { {10,9,8,7}, {6,5,4,3}, {2,1,0,-1} };
	int c[3][4];
	int d[3][4];

	// 두 행렬 더하기 : c = a + b
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			c[i][j] = a[i][j] + b[i][j];

	// c 행렬 출력하기
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%4d", c[i][j]);
		printf("\n");
	}
	printf("\n");

	sum(a, b, d);
	printArray(d, 3, 4);
}