// 초등학생용 더하기 프로그램
// 10개 문제를 랜덤하게 만들고 답이 맞는지 출력한다
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// random 만들기(시드 설정)
	srand(time(NULL));
	
	int ans;	// 정답

	// 10번 반복
	for (int i = 0; i < 10; i++) {
		int x = rand() % 10 + 1;	// 1~10까지
		int y = rand() % 10 + 1;	// 1~10까지
		printf("(문제 %d) : %d + %d = ", i + 1, x, y);
		scanf_s("%d", &ans);
		if (ans == x + y)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
}