// 포인터 배열
#include <stdio.h>

int main()
{
	const char* fruits[] = { "apple", "banana", "melon" };

	for (int i = 0; i < 3; i++)
		printf("%s\n", fruits[i]);

}