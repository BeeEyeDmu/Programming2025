//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];

	printf("이름 : ");
	//scanf("%s", name);
	scanf_s("%s", name, sizeof(name));

	getchar();	// \n을 읽어버린다

	printf("이름 : %s\n", name);

	char line[100];

	printf("라인 입력 : ");
	//fgets(line, sizeof(line), stdin);	// 한줄 읽기
	gets_s(line, sizeof(line));
	printf("라인 : %s\n", line);
}