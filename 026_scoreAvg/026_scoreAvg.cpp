#include <stdio.h>

int main()
{
	int sum = 0;	// 합계
	int cnt = 0;	// 사람수
	int n;	// 입력

	n = 0;

	while (1) {
		printf("점수 입력 : ");
		scanf_s("%d", &n);
		if (n < 0)
			break;
		cnt++;
		sum += n;
	}

	if (cnt != 0)
		printf("합계 = %d, 평균 = %.1f\n", sum, (float)sum / cnt);
	else
		printf("입력된 값이 없습니다.\n");

}