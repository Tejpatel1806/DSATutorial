
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
        list->next=(struct abc *)malloc(sizeof(struct abc*));
        create(list->next);
    }
}
void print(struct abc *list)
{
    struct abc *ptr;
    ptr=list;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->number);
        ptr=ptr->next;
    }
    printf("\n");
}
struct abc *deleteatfirst(struct abc *list)
{
    struct abc *ptr;
    ptr=list;
    list=list->next;
    free(ptr);
    return list;
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
int main()
{
    struct abc *dfg, *dfg1;
    dfg=(struct abc *)malloc(sizeof(struct abc));
    create(dfg);
    print(dfg);
   // dfg1=deleteatfirst(dfg);
    //print(dfg1);
    deleteatlast(dfg);
    print(dfg);
    return 0;