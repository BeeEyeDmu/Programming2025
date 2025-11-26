#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	//pi = (int*)10000;

	printf("%p, %p\n", pi, pi+1);

	printf("*pi++ = %d\n", *pi);
	printf("*pi++ = %d\n", ++(*pi));
	
	printf("(*pi)++ = %d\n", (*pi));
	printf("(*pi)++ = %d\n", (*pi)++);

	printf("(*pi)++ = %d\n", (*pi));
}