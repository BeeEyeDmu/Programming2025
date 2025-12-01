#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("sample.txt", "r");	// 읽기 모드

	if (fp == NULL)
		printf("파일 열기 실패!\n");
	else
		printf("파일 열기 성공!\n");

	int c;

	while ((c = fgetc(fp)) != EOF)
		putchar(c);

	fclose(fp);

	//fp = fopen("sample.txt", "w"); // 쓰기 모드

	//if (fp == NULL)
	//	printf("파일 열기 실패!\n");
	//else
	//	printf("파일 열기 성공!\n");

	//fputc('a', fp);
	//fputc('b', fp);
	//fputc('c', fp);

	//fclose(fp);
}