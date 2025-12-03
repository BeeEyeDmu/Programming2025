#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	fp = fopen("sample.txt", "a");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
	fclose(fp);

	fp = fopen("sample.txt", "r");

	fseek(fp, 3, SEEK_SET);	// 처음에서 3바이트 이동
	printf("%c\n", fgetc(fp));
	printf("현재 위치 : %ld\n", ftell(fp));

	fseek(fp, -1, SEEK_END);
	printf("%c\n", fgetc(fp));
	printf("현재 위치 : %ld\n", ftell(fp));

	fclose(fp);
}