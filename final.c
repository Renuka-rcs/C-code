#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
void create();
void addatstart();
void addatlast();
int addatpos(int);
void search(int);
void display();
void reverse();
int listcount();
void delete(int);
struct node
{
    int data;
    struct node *link;

};
struct node *start=NULL;
void main()
{
    int choice,n,i,m,pos,num;
    char ch;

    while(1)
    {
        printf("\n#################################################");
        printf("\n");
        printf("\n 1 \t Create List" );
        printf("\n 2 \t Add At Starting " );
        printf("\n 3 \t Add at Last" );
        printf("\n 4 \t Add at some position" );
        printf("\n 5 \t delete at position");
        printf("\n 6 \t Display");
        printf("\n 7 \t Count how many data");
        printf("\n 8 \t Reverse");
        printf("\n 9 \t Search");
        printf("\n 10 \t Quit");
        printf("\n");

    printf("\n");
    printf("\nEnter your choice\n");
    printf("\n-------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {



    case 1:
    printf("\n-------------------------\n");
        printf("How many elements/nodes you want to enter\n");
        scanf("%d",&n);
        for(i=0;i<=n-1;i++)
            create();
        break;


    case 2:
    printf("\n-------------------------\n");

        printf("\nyou have selected to add the data at the beginning\n");
        addatstart();
        break;


    case 3:
    printf("\n-------------------------\n");

        printf("\nyou selected the option to add the element at last\n");
        addatlast();
        break;


   case 4:
    printf("\n-------------------------\n");

        printf("enter the position where you want to enter the element");
        scanf("%d",&pos);
        addatpos(pos);
        break;


   case 5:
    printf("\n-------------------------\n");

        printf("\nenter the data you want to delete?\n");
        display();
        scanf("%d",&num);
        delete(num);
        break;


    case 6:
    printf("\n-------------------------\n");


        display();
        break;


    case 7:
    printf("\n-------------------------\n");

        int len;
        len=listcount();
        printf("total element in the linked list is %d\n",len);
        break;


    case 8:
    printf("\n-------------------------\n");

        printf("original list is\n");
        display();
        printf("reverse of this list is\n");
        reverse();
        break;

    case 9:
    printf("\n-------------------------\n");

        printf("\nenter the element to search?\n");
        scanf("%d",&m);
        search(m);
        break;
    case 10:
    printf("\n-------------------------\n");

        return 0;
    break;
    default:
    printf("\n-------------------------\n");

        printf("\ninvalid choice\n");
    }
    }
}


void create()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    printf("\nenter the data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct node *p;
        p=start;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}


void display()
{
    int x;
    struct node *temp;
    temp=start;

    //printf("element in the list :\n");
    //printf("\n");
    if(start==NULL)
    {
        printf("\nlist is empty\n");
    }
    int i=1;
    while(temp!=NULL)
    {

        printf(" %d ) data : %d \n",i,temp->data);
        temp=temp->link;
        i++;
    }

    }



void addatstart()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    struct node *p;
     printf("\nenter the data\n");
    scanf("%d",&temp->data);
    p=start;
    start=temp;
    temp->link=p;
    display();
}

void addatlast()
{

    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct node *p;
        p=start;
        while(p->link!=NULL)
        {
            p=p->link;

        }
        p->link=temp;
    }
    display();

}

int listcount()
{
    int count=1;
    struct node *temp;
    temp=start;
 while(temp->link!=NULL)
 {
    count++;
    temp=temp->link;
 }
 //printf("\n total element in the list is \t %d\n",count);
return (count);
}


void search(int n)
{
    struct node *temp;
    temp=start;
    while ( temp!= NULL)
    {
        if (temp->data == n)
        {
            printf("\n searching successful!!!!\n");
            return;
        }
        temp = temp->link;
    }
    printf("Unsuccessful search\n");
}


int addatpos(int pos)
{
    struct node *p,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int i;

    p=start;
    for(i=1;i<pos-1;i++)
    {

        p=p->link;
        if(p==NULL)
        {
            printf("\n no such position found! \n");
            //printf("\n there are only %d elements in the list",count());
            return;


        }

    }


    printf("\nenter the data\n");
    scanf("%d",&temp->data);
    temp->link=p->link;
    p->link=temp;
    display();
}


void delete(int num)
{
    struct node *temp,*p;
    temp=start;
    while(temp->link!=NULL)
     {
        if(temp->link->data==num)
        {
            p=temp->link;
            temp->link=p->link;
            free(p);
        }
        temp=temp->link;
     }
    display();
return 0;
}




/*void reverse()
{
    struct node *p,*q;
    p=q=start;
    int i,j,len;
    len=listcount();
    i=0;
    j=len-1;
    int t2;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }

        int t2=p->data;
        p->data=q->data;
        q->data=t2;
        i++;
        j--;
        p=p->link;
        q=start;
    }
display();
}*/
 void reverse()
 {
    struct node *a,*b,*c;
    a=start;
    b=c=NULL;
    while(a!=NULL)
    {
        c=a->link;
        a->link=b;
        b=a;
        a=c;
    }
    start=b;
     display();
 }

