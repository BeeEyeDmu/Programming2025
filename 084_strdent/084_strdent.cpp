#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[20];
	struct date dob;
	double grade;
};

int main()
{
	struct student s1;

	s1.dob.year = 2006;
	s1.dob.month = 12;
	s1.dob.day = 1;
}