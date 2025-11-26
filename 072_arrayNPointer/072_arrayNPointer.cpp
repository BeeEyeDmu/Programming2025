#include <stdio.h>

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;

	p = a;	// p = &a[0]

	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);

	printf("%d %d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));
	printf("%d %d %d %d %d\n", *a, *(a + 1), *(a + 2), *(a + 3), *(a + 4));

	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", *(p+i));
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));
	printf("\n");

	printf("%d %lu\n", sizeof(int *), a);
	printf("%d %ld\n", sizeof(int*), a);
}