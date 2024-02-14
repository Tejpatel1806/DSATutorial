#include<stdio.h>
#include<stdlib.h>
struct abc
    {
        int number;
        struct abc *next;
    };
void create(struct abc *list)
{
    scanf("%d",&list->number);
    if(list->number==-5)
    {
        list->next=NULL;
    }
    else
    {
        list->next=(struct abc*)malloc(sizeof(struct abc));
        create(list->next);
    }
}
struct abc* insertatfirst(struct abc *list,int y)
{
    struct abc *ptr;
    ptr=(struct abc*)malloc(sizeof(struct abc));
    ptr->number=y;
    ptr->next=list;
    return(ptr);
}
void print(struct abc *list)
{
    struct abc *ptr1;
    ptr1=list;
    while(ptr1!=NULL)
    {
        printf("%d ",ptr1->number);
        ptr1=ptr1->next;
    }
  printf("\n");
}

void insertatindex(struct abc *list,int d,int l)
{
    struct abc *ptr2;
    struct abc *ptr3;
    ptr3=(struct abc *)malloc(sizeof(struct abc*));
    ptr3->number=l;
    ptr2=list;
    int f=0;
    while(f!=d-1)
    {
        ptr2=ptr2->next;
        f++;
    }
    ptr3->next=ptr2->next;
    ptr2->next=ptr3;
}
int main()
{
    struct abc *node,*node1;
    node=(struct abc*)malloc(sizeof(struct abc));
    create(node);
    int y,p;
    printf("enter the element do you want to insertatfirst:\n");
    scanf("%d",&y);
    node1=insertatfirst(node,y);
    print(node1);
    printf("enter the element do you want to insertatlast:\n");
    scanf("%d",&p);
    insertatlast(node,p);
    print(node);
    printf("Enter the position and number do you want to insert:\n");
    int h,y1;
    scanf("%d%d",&h,&y1);
    insertatindex(node,h,y1);
     print(node);
    return 0;
}