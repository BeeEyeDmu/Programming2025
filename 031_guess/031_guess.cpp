#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	int answer = rand() % 100;
	int guess;
	int cnt = 0;		// 반복횟수

	do {
		printf("정답 추측 : ");
		scanf_s("%d", &guess);

		if (answer == guess)
			printf("정답!\n");
		else if (answer < guess)
			printf("너무 높아요!\n");
		else
			printf("너무 낮아요!\n");

		cnt++;
	} while (answer != guess);

	printf("%d번 시도만에 맞추었습니다.\n", cnt);
}
