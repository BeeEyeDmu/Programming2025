#include <stdio.h>

int main()
{
	char src[] = "abcdefg";
	char dest[100];

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	printf("%s\n", src);
	printf("%s\n", dest);

	int len = 0;
	for (int i = 0; src[i] != '\0'; i++)
		len++;
	printf("%d\n", len);
}