#include <stdio.h>
#define TAX_RATE 0.2

int main()
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급 : ");
	scanf_s("%d", &m_salary);
	y_salary = m_salary * MONTHS;

	printf("연봉 : %d\n", y_salary);
	printf("세금 : %f\n", y_salary * TAX_RATE);
	
}