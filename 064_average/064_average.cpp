#include <stdio.h>
#define STUDENTS 5

float get_average(int a[], int n);
void pr_array(int a[], int n);
void modi_array(int a[], int n);

int main()
{
	int scores[] = { 56,78,54,90,38 };

	float avg = get_average(scores, STUDENTS);
	printf("평균 : %.1f\n", avg);

	pr_array(scores, STUDENTS);
	modi_array(scores, STUDENTS);

	pr_array(scores, STUDENTS); 
	printf("평균 : %.1f\n", get_average(scores, STUDENTS));
}

// 배열의 내용을 출력
void pr_array(const int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");
}

void modi_array(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i]++;
}

float get_average(int a[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i];

	return (float)sum / n;
}