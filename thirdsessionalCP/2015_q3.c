#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct class
{
    int rollno;
    int sem;
    char name[50];
    struct class *next;
}*head;
void create(int n)
{
    struct class *newnode,*temp;
    int no,i,u;
    char xf[50];
    head=(struct class *)malloc(sizeof(struct class));
    printf("enter the data of node 1:\n");
    scanf("%d%d%s",&no,&u,&xf);
    head->rollno=no;
    head->sem=u;
    strcpy(head->name,xf);
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct class *)malloc(sizeof(struct class));
        printf("enter the data of node %d:\n",i);
        scanf("%d%d%s",&no,&u,&xf);

        newnode->rollno=no;
        newnode->sem=u;
        strcpy(newnode->name,xf);
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
         printf("%d %d %s\n",ptr1->rollno,ptr1->sem,ptr1->name);
         ptr1=ptr1->next;
    }
}
int main()
{
     int y;
     printf("enter the number of student do you want to store details:");
     scanf("%d",&y);
     create(y);
     display();
     return 0;
}