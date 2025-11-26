#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void pr_array(const int a[], int n);
int binary_search(int a[], int n, int key); 	// 원형(prototype)

void randomize(int a[], int n)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++)
		a[i] = rand() % 10000;
}

int main()
{
	//int a[] = { 5,7,8,3,2,1,0,4,6,9 };
	int a[SIZE];

	randomize(a, SIZE);	// 랜덤값으로 배열을 채운다

	pr_array(a, SIZE);

	// 선택정렬 알고리즘
	for (int i = 0; i < SIZE - 1; i++) {
		int min = i;	// 최소값의 인덱스
		for (int j = i + 1; j < SIZE; j++)
			if (a[j] < a[min])
				min = j;
		// a[i]와 a[min]을 바꿈
		int t = a[i];
		a[i] = a[min];
		a[min] = t;
	}

	pr_array(a, SIZE);

	// 이진 탐색
	int key;

	printf("이진 탐색을 위한 찾고자 하는 데이터 입력 : ");
	scanf_s("%d", &key);

	int index = binary_search(a, SIZE, key);
	if (index == -1)
		printf("찾는 값 없음!");
	else
		printf("a[%d] = %d\n", index, key);
}

// 이진 탐색
int binary_search(int a[], int n, int key) 
{
	int low, high, middle;
	low = 0;
	high = n - 1;

	while (low <= high) {
		printf("[%d - %d]\n", low, high);
		middle = (low + high) / 2;
		if (a[middle] == key)
			return middle;
		else if (key > a[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}

// 배열의 내용을 출력
void pr_array(const int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");
}