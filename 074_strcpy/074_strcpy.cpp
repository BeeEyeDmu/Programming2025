#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[10] = "Hello";

	printf("%s\n", str);

	//strcpy_s(str, sizeof(str), "World"); // VS에서는 안전함수
	strcpy(str, "World");
	printf("%s\n", str);

}