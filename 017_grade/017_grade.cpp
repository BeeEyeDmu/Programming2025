// 017_grade.cpp : 학점
//

#include <stdio.h>

int main()
{
  int score;

  printf("성적 입력 : ");
  scanf_s("%d", &score);

  if (score >= 90)
    printf("A\n");
  else if(score >= 80)
    printf("B\n");
  else if (score >= 70)
    printf("C\n");
  else if (score >= 60)
    printf("D\n");
  else
    printf("F\n");
}
