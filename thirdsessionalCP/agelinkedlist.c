#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct class
{
    int age;
    struct class *next;
}*head;
void create(int n)
{
    struct class *newnode,*temp;
    int no,i;
    head=(struct class *)malloc(sizeof(struct class));
    printf("enter the data of node 1:\n");
    scanf("%d",&no);
    head->age=no;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct class *)malloc(sizeof(struct class));
        printf("enter the data of node %d:\n",i);
        scanf("%d",&no);

        newnode->age=no;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void display()
{
    struct class *ptr1=head;
    while(ptr1!=NULL)
    {
         printf("%d\n",ptr1->age);
         ptr1=ptr1->next;
    }
}
void count()
{
    int count=0,count1=0;
    struct class *oi;
    oi=head;
    while(oi!=NULL)
    {
        if(oi->age>=12 && oi->age<=19)
        {
            count++;
        }
        else
        {
            count1++;
        }
        oi=oi->next;
    }
    printf("%d %d",count,count1);
}
int main()
{
     int y;
     printf("enter the number of student do you want to store details:");
     scanf("%d",&y);
     create(y);
     display();
     count();
     return 0;
}