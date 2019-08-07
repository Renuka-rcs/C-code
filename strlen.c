/**************Program for Count String length in Array Version without using Built-in Function************/
#include<stdio.h>
#define n 50

//function Declaration
 int strlen(char str[]);
 //global variable declaration
 int i=0;
 //main program
int main()
{
	char string[n];
	printf("Enter the string\n");
	scanf("%s",string);
	printf("String is %s \n",string);
	strlen(string);                               //call string length count function
	printf("String Length is %d\n",i);
}

//sting lenth count function in Array Version
 int strlen(char str[])
{
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
