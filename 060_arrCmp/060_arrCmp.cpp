// 060_arrCmp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 배열에 저장된 원소가 같은지 비교
#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1,2,3,3,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	for(int i=0;i<SIZE; i++)
		if (a[i] != b[i]) {
			printf("a[]와 b[]는 다릅니다\n");
			return 0;
		}

	printf("a[]와 b[]는 같습니다\n");
}


