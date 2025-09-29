#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int x, y, result = 0;

point:

	printf("수식 입력(예: 5+6) : ");
	scanf("%d%c%d", &x, &op, &y);

	//scanf_s("%d%c%d", &x, &op, 1, &y); // 비주얼스튜디어용

	printf("%d %c %d = ", x, op, y);

	if (op == '+') 
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("연산자 틀림!\n");

	printf("%d\n", result);

	switch (op) {
	case '+':		result = x + y;		break;
	case '-':		result = x - y;		break;
	case '*':		result = x * y;		break;
	case '/':		result = x / y;		break;
	case '%':		result = x % y;		break;
	default:		printf("모르는 연산자!\n");		break;
	}

	printf("%d\n", result);

	goto point;
}