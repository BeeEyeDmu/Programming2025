// 018_char.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  char ch;

  printf("문자를 입력 : ");
  ch = getchar();

  if (ch >= 'A' && ch <= 'Z')
    //if (ch >= 65 && ch <= 90)
    printf("%c는 대문자입니다.\n", ch);
  else if(ch >= 'a' && ch <= 'z')
    printf("%c는 소문자입니다.\n", ch);
  else if(ch >= '0' && ch <= '9')
    printf("%c는 숫자입니다.\n", ch);
  else
    printf("%c는 기타문자입니다.\n", ch);
}
