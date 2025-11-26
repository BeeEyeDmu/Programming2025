#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;			// 학번
	char name[10];	// 이름
	double grade;		// 성적
};

int main()
{
	struct student s;

	s.number = 25615001;
	strcpy(s.name, "홍길동");
	// strcpy_s(s.name, 10, "홍길동");	
	// s.name = "홍길동"; // 이렇게 쓸수 없다
	s.grade = 4.3;

	printf("학번 : ");
	scanf_s("%d", &s.number);
	printf("이름 : ");
	scanf_s("%s", s.name, 10 /*sizeof(s.name)*/);
	printf("학점 : ");
	scanf_s("%lf", &s.grade);

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.2f\n", s.grade);
}