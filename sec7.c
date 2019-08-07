/*passing  structure members as arguments*/
/***dot operator high precendance operator*/
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
void display(char name[],int rollno,float marks);
int main(void){
        struct student stuarr2;
	struct student stuarr={"desd",1,12};
        strcpy(stuarr2.name,"cdac");
	stuarr2.rollno=1;
	stuarr2.marks=12;
        display(stuarr.name,stuarr.rollno,stuarr.marks);
        display(stuarr2.name,stuarr2.rollno,stuarr2.marks);
	return 0;
}
void display(char name[],int rollno,float marks)
{
	printf("data %s \t %d \t %.2f\n",name,rollno,marks);
}
