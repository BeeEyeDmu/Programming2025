#include <stdio.h>

int main()
{
	int i = 10;
	char c = 'a';
	float f = 12.3;

	printf("%d %p\n", &i, &i);
	printf("%d %p\n", &c, &c);
	printf("%d %p\n", &f, &f);

	int* pi;	// int *pi; 정수 포인터(정수가 저장된 곳의 주소를 저장)
	char* pc;	// char 포인터
	float* pf;	// float 포인터

	pi = &i;
	pc = &c;
	pf = &f;
	pf = NULL;	// 널 주소, 즉 0번지

	printf("%d %p\n", pi, pi);
	printf("%d %p\n", pc, pc);
	printf("%d %p\n", pf, pf); 

	printf("sizeof(pi) = %d\n", sizeof(pi));
	printf("sizeof(pc) = %d\n", sizeof(pc));
	printf("sizeof(pf) = %d\n", sizeof(pf));
}