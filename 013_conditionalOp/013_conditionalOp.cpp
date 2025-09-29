#include <stdio.h>

int main()
{
	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	(age >= 20) ? printf("성년!\n") : printf("미성년!\n");

	printf("%s\n", (age >= 20) ? "성년!" : "미성년!");
}