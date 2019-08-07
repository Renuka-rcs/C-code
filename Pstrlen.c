/**************Program for Count String length in Pointer Version without using Built-in Function************/
#include<stdio.h>
#define n 50

//function Declaration
 int strlen(char *str);
 //global variable declaration
 int i=0;
 //main program
int main()
{
	char string[n];
	printf("Enter the string\n");
	scanf("%s",string);
	printf("String is %s \n",string);
	i=strlen(string);                               //call string length count function
	printf("String Length is %d\n",i);
}

//sting lenth count function in Pointer Version
 int strlen(char *str)
{
	int count=0,j;
	char *p=str;
	while(*p!='\0')
	{
		p++;
		count++;
	}
	return count;
}
