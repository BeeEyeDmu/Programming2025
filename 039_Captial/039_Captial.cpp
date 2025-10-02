// 소문자를 대문자
// q가 입력되면 끝
#include <stdio.h>

int main()
{
	char c;

	while (1) {
		printf("소문자 : ");
		scanf_s("%c", &c);
		if (c == 'q' || c == 'Q')
			break;
		if (c < 'a' || c > 'z')	// 소문자가 아님
			continue;
		printf("%c -> %c\n", c, c - 'a' + 'A');
	}
}