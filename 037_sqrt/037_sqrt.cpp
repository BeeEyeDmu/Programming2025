// 037_sqrt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <math.h>

int main()
{
  double f;

  while (1) {
    printf("실수 입력(음수는 종료) : ");
    scanf_s("%lf", &f);
    if (f < 0)
      break;
    printf("%f의 제곱근은 %f\n", f, sqrt(f));
  }
}
