/*pointer structure*/
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
	struct student stuarr={"desd",1,12};
	struct student *ptr=&stuarr;

	printf("array data=\n %s\n %d \n %.2f\n",(*ptr).name,(*ptr).rollno,(*ptr).marks);
	printf("array data=\n %s\n %d \n %.2f\n",ptr->name,ptr->rollno,ptr->marks);

	return 0;
}
