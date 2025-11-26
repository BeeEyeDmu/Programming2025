#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1,2,3,4,5 }; 
	int b[SIZE];

	//	b = a;	// 에러

	// (1) 배열의 복사
	for (int i = 0; i < SIZE; i++)
		b[i] = a[i];

	// (2) 배열 내용의 비교
	if (a == b)		printf("같다\n"); // 이렇게 하면 안된다

	for(int i=0; i<SIZE; i++)
		if (a[i] != b[i]) {
			printf("a[]와 b[]는 다르다.");
			break;
		}

	return 0;
} 