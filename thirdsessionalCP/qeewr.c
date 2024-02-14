#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct abc
{
    int data;
    struct abc *next;
};
void print(struct abc *list)
{
    struct abc *ptr1;
    ptr1=list;
    while(ptr1!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->next;
    }
}
void create(struct abc *list)
{
    scanf("%d",&list->data);
    if(list->data==-999)
    {
        list->next=NULL;
    }
    else
    {
        list->next=(struct abc *)malloc(sizeof(struct abc));
        create(list->next);
    }
}
void deleteatlast(struct abc *list)
{
    struct abc *ptr,*ptr1;
    ptr=list;
    ptr1=list->next;
    while(ptr1->next!=NULL)
    {
      ptr=ptr->next;
      ptr1=ptr1->next;  
    }
    ptr->next=NULL;
    free(ptr1);
}
void fun(struct abc *start)
{
    if(start==NULL)
        return;
    printf("%d ",start->data);
    if(start->next!=NULL)
    fun(start->next->next);
    printf("%d ",start->data);
}
int main()
{
    struct abc *head=(struct abc *)malloc(sizeof(struct abc));
    create(head);
    print(head);
    printf("\n");
    deleteatlast(head);
    print(head);
    printf("\n");
    fun(head);
    return 0;
}