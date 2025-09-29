// 3의 배수이거나 음수일 때 빠져나가는 무한루프
// -> (3의 배수가 아니고 동시에 음수가 아닐 때 계속되는 무한 루프)
#include <stdio.h>

int main()
{
	int n;

	while (1) {
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
		if (n % 3 == 0 || n < 0)
			break;
		else
			printf("%d\n", n);
	}
}
