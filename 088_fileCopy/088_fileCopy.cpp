// 텍스트 파일의 복사
// (1) 한 줄씩 : fgets(), fputs()
// (2) 한 글자씩 : fgetc(), fputc()

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp1, * fp2;
	char f1[100], f2[100];
	char buffer[100];

	printf("원본 파일 : ");
	scanf("%s", f1);

	printf("복사할 파일 : ");
	scanf("%s", f2);

	// f1 파일에서 f2 파일로 복사(에러 체크 필요)
	fp1 = fopen(f1, "r");
	fp2 = fopen(f2, "w");

	// 한 줄씩 복사
	while (fgets(buffer, 100, fp1) != NULL)
		fputs(buffer, fp2);

	// 한 글자씩 복사
	int c;

	//while ((c = fgetc(fp1)) != EOF)
	//	fputc(c, fp2);

	fclose(fp1);
	fclose(fp2);
}