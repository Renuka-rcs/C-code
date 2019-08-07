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
	int i;
	struct student stuarr[10]={
                              {"renu",1,15},
			      {"cdac",2,20},
			      {"desd",3,100}
	};
	for(i=0;i<4;i++)
	{
	
		printf("array data=\n %s\n %d \n %.2f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
	}
	return 0;
}
