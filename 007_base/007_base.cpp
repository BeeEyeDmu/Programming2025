#include <stdio.h>

int main()
{
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x = %d = %o = %0x\n", x, x, x);
	printf("y = %d = %o = %0x\n", y, y, y);
	printf("z = %d = %o = %0x\n", z, z, z);
}