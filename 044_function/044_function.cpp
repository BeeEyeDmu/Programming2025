#include <stdio.h>

// 함수 정의 : 리턴값이 없고(void), 매개변수도 없는 함수
// 별표 30개를 출력하는 함수
void print_stars(void)
{
	for (int i = 0; i < 30; i++)
		printf("*");
	printf("\n");
}

int main()
{
	print_stars();
	printf("Hello World!\n");
	print_stars();
}