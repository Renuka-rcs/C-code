#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter how many characters string do u want to print\n");
	scanf("%d",&n);
	char string[n];
	printf("Enter the String\n");
	scanf("%s",string);
	printf("String is : %s\n",string);
        printf("Reverse String is :\n");
        int i;

	for(i=n-1;i>=0;)
	{
		printf("%c",string[i]);
		i--;
	}
	printf("\n");

 }
