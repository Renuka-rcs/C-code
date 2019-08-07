/*********?????????????????????????????*************/
#include<stdio.h>
#include<string.h>
struct date{                     //date structure
	
	int day;
        int month;	
        int year;
	};
struct student                           //student structure
{
	char name[20];
	int rollno;
	float marks;
	struct date birthdate;                          //
}stu;

int main(void)
{
	struct student stu={"desd",11,2,{1,10,2000}};
	printf(" %s %d %f %d %d %d\n",stu.name,&stu.rollno,&stu.marks,stu.birthdate.day,stu.birthdate.month,stu.birthdate.year);
}
