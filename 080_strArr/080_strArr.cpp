#include <stdio.h>

int main()
{
	char s[6] = "init";
	char a[3][6] = { "init", "open", "close" };

	printf("%s\n", s);
	for (int i = 0; i < 3; i++)
		printf("%s\n", a[i]);

	const char* p[3] = { "init", "open", "close" };
	for (int i = 0; i < 3; i++)
		printf("%s\n", p[i]);
}