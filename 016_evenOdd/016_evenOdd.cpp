// 016_evenOdd.cpp : 홀수 짝수 판별
//

#include <stdio.h>

int main()
{
  int n;

  printf("n 입력 : ");
  scanf_s("%d", &n);

  if (n % 2 == 0)
    printf("짝수\n");
  else
    printf("홀수\n");
}