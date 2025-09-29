// 015_abs.cpp : 절대값
//

#include <stdio.h>

int main()
{
  int num;

  printf("입력 : ");
  scanf_s("%d", &num);

  if (num < 0)
    num = -num;

  printf("절대값 : %d\n", num);

  if (num >= 60) {
    printf("합격!\n");
    printf("장학금도 받을 수 있음!\n");
  }
  else {
    printf("불합격!\n");
    printf("안타깝네요!\n");
  }
}
