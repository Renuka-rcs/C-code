#include<stdio.h>
int main()
{
	char string[10];
	int i;
	printf("Enter the String\n");
	scanf("%s",string);
	printf("String is %s\n",string);
	while(string[i]!=0)
	{
		printf("%c",string[i]);
		i++;
	}
      int j,k=0;
      for(j=i;j>=0;)
     {
	 if(string[k]==string[j])
 	 {
	       	 k++;
                  j--;
		  //printf("%d",i);
		//		  printf("%d",k);
	 }
//	         printf("Palindrome Number\n");
	 
	//sie
      		 //printf("Not Palindrome Number\n");
	   
     // break;	
     //
     
    }
}
