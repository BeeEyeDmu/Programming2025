#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Man is immortal, because he has a soul";
	char seps[] = " ,\t\n";

	char* token = strtok (s, seps);
	while (token != NULL) {
		printf("토큰 : %s\n", token);
		token = strtok(NULL, seps);
	}

}