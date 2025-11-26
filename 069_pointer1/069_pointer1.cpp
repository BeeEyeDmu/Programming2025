#include <stdio.h>

int main()
{
	int i = 3000;
	int* p = &i;
	double d = 1.0;

	printf("%d, %p\n", i, p);
	printf("%d\n", *p);

	// 포인터로 변수 값을 변경할 수 있다
	*p = 1000;
	printf("%d %d\n", i, *p);

	
}