#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MAX	1000

// 랜덤하게(<MAX) SIZE 갯수의 정수를 배열에 저장하고
// 가장 작은(큰) 수를 찾아라(search)
// 특정한 값을 찾아라
int main() 
{
	int a[SIZE];

	srand((unsigned)time(NULL));	// srand(time(0));

	// 랜덤값 저장
	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % MAX;

	// 출력
	for (int i = 0; i < SIZE; i++)
		printf("%5d", a[i]);
	printf("\n");

	// 탐색
	int min = a[0];
	int max = a[0];
		
	for (int i = 1; i < SIZE; i++) {
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}

	printf("min = %d, max = %d\n", min, max);

	int value;			// 찾고자 하는 값

	printf("찾을 값 : ");
	scanf_s("%d", &value);

	// 배열 중, value를 찾아서 
	// (1) 있으면 그 인덱스를 출력하고
	// (2) 없으면 없다고 출력한다
	int i;

	for (i = 0; i < SIZE; i++) {
		if (a[i] == value) {
			printf("%d는 a[%d]에 있습니다.\n", value, i);
			break;
		}
	}

	if (i == SIZE)
		printf("%d는 a[]에 없습니다.", value);

}