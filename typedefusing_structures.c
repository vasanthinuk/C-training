#include<stdio.h>

struct Student
{
	int rollno;
	char name[20];
};

int main()
{
	typedef struct Student stud;
	stud s1;
	printf("Enter rollno:");
	scanf("%d", &s1.rollno);
	printf("Enter name:");
	scanf("%s", s1.name);
	printf("rollno is:%d\n", s1.rollno);
	printf("Name is:%s\n",s1.name);
	return 0;
}
