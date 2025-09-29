#include <stdio.h>
#define SEC_PER_MIN 60

int main()
{
	int input, min, sec;

	printf("초를 입력 : ");
	scanf_s("%d", &input);

	min = input / SEC_PER_MIN;
	sec = input % SEC_PER_MIN;

	printf("%d분 %d초\n", min, sec);
}