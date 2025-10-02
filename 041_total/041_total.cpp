// 원금, 이율, 기간을 입력받아
// 원리합계를 출력
#include <stdio.h>
#include <math.h>

int main()
{
	int year;
	double invest; // 원금
	double rate;		// 이율
	double total;	// 원리합계

	printf("원금 : ");
	scanf_s("%lf", &invest);
	printf("이율(%%) : ");
	scanf_s("%lf", &rate);
	printf("기간(년) : ");
	scanf_s("%d", &year);

	for (int i = 1; i <= year; i++) {
		total = invest * pow(1 + rate / 100, i);
		printf("%2d %10.1f\n", i, total);
	}
}