#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src_file, * dst_file;	// 원본, 복사할 파일 포인터
	char filename[100];	// 파일 이름
	char buffer[1024];	// 1KB=1024B 단위로 복사
	int r_count;				// 읽은 바이트 수

	printf("이미지 파일 : ");
	scanf("%s", filename);

	src_file = fopen(filename, "rb");	// read binary
	dst_file = fopen("copy.jpg", "wb");	// write binary

	if (src_file == NULL || dst_file == NULL) {
		printf("파일 열기 오류\n");
		fprintf(stderr, "파일 열기 오류\n");
		return 1;
	}

	while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
		int w_count = fwrite(buffer, 1, r_count, dst_file);
		if (w_count < 0) {
			fprintf(stderr, "파일 쓰기 오류\n");
			return 1;
		}
	}

	printf("copy.jpg에 복사됨\n");
	fclose(src_file);
	fclose(dst_file);
}