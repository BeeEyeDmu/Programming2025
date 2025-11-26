#include <stdio.h>

void sub() {
	static int s = 0;
	int a = 0;

	printf("s = %d, a = %d\n", s, a);
	s++;
	a++;
}

int main()
{
	sub();
	sub();
	sub();
}