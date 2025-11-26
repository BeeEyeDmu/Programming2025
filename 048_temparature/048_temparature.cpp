#include <stdio.h>

void printMenu()
{
	printf("-----------------------------\n");
	printf(" 'c' : 섭씨에서 화씨로 변환 \n");
	printf(" 'f' : 화씨에서 섭씨로 변환 \n");
	printf(" 'q' : 종료 \n");
	printf("-----------------------------\n");
}

// 섭씨 -> 화씨
double c2f(double t)
{
	return 9.0 / 5 * t + 32;
}

// 화씨 -> 섭씨
double f2c(double t)
{
	return (t-32) * 5.0 / 9;
}

int main()
{
	double temp;

	while (1) {
		printMenu();
		printf(" 선택 >> ");
		char c = getchar();		// 문자 하나 입력
		if (c == 'q')
			break;
		else if(c == 'c') {
			printf(" 섭씨 온도 : ");
			scanf_s("%lf", &temp);
			printf(" 화씨 온도 : %lf\n", c2f(temp));
		}
		else if (c == 'f') {
			printf(" 화씨 온도 : ");
			scanf_s("%lf", &temp);
			printf(" 섭씨 온도 : %lf\n", f2c(temp));
		}
		getchar();	// '\n'을 없애기 위해 사용
	}
}