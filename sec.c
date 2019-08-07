/*atarting*/
/***dot operator high precendance operator*/
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main(void)
{
	struct student stu1={"cdac1",1,12.9};                   //given data
	struct student stu2,stu3,stu4;                               //copy and assigned
	strcpy(stu2.name,"cdac2");//we can't assign string usimg assignment operator so  strcpy used
        stu2.rollno=2;
	stu2.marks=123.3;
	stu4=stu1;    //stu1 assigned to the stu4
	printf("ENTER THE NAME,ROLLNO, AND MARKS\n");                   //user input
	scanf("%s%d%f",stu3.name,&stu3.rollno,&stu3.marks);
	printf("stu1===%s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
	printf("stu2===%s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
	printf("stu3===%s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);
	printf("stu4===%s %d %.2f\n",stu4.name,stu4.rollno,stu4.marks);
	return 0;
}
