// 020_monthDays.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int month, days;

  printf("달 입력 : ");
  scanf_s("%d", &month);

  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    days = 31;
    break;
  case 2:
    days = 28;
    break;
  default:
    days = 30;
    break;
  }

  printf("%d월 : %d일\n", month, days);
}
