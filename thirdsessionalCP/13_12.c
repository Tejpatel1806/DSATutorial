#include<stdio.h>
#include<stdlib.h>
struct abc
{
    int data;
    struct abc *next;
};
void create(struct abc *list)
{
    scanf("%d",&list->data);
    if(list->data==-5)
    {
        list->next=NULL;
    }
    else
    {
        list->next=(struct abc *)malloc(sizeof(struct abc));
        create(list->next);
    }
}
int calcu(struct abc *list)
{
    int sum=0;
    struct abc *ptr;
    ptr=list;
    while(ptr!=NULL)
    {
        sum++;
        ptr=ptr->next;
    }
    return sum;
}
int main()
{
    int x;
    struct abc *head;
    head=(struct abc *)malloc(sizeof(struct abc));
    create(head);
    x=calcu(head);
    printf("Number of Node is %d",x);
    return 0;
}