#include <stdio.h>

int main()
{
	int choice = 0;

	do {
		printf("1. 메뉴 1\n");
		printf("2. 메뉴 2\n");
		printf("3. 메뉴 3\n");
		printf("4. 끝내기\n");
		printf(">> 선택 : ");
		scanf_s("%d", &choice);
		printf("선택 메뉴 = %d\n", choice);
	} while ( choice != 4);


}