#include <stdio.h>

void hanoi(int n, char from, char tmp, char to)
{
	static int cnt = 0;

	cnt++;
	printf("hanoi() 호출 횟수 : %d\n", cnt);

	// 끝나는 조건
	if (n == 1)
		printf("%c -> %c\n", from, to);
	else {
		hanoi(n - 1, from, to, tmp);
		printf("%c -> %c\n", from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main()
{
	hanoi(4, 'A', 'B', 'C'); // from, tmp, to
}