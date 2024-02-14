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
struct abc *merge(struct abc *list1,struct abc *list2)
{
    struct abc *demo=list1;
    while(demo->next!=NULL)
    {
        demo=demo->next;
    }
    demo->next=list2;
    return list1;
}
int main()
{
    struct abc *node,*node1,*node2;
    node=(struct abc*)malloc(sizeof(struct abc));
    node1=(struct abc*)malloc(sizeof(struct abc));
    printf("ENTER THE VALUE OF FIRST LINKED LIST:\n");
    create(node);
    printf("THE LIST OF FIRST LINKED LIST:\n");
    print(node);
    printf("ENTER THE VALUE OF SECOND LINKED LIST:\n");
    create(node1);
    printf("THE LIST OF SECOND LINKED LIST:\n");
    print(node1);
    node2=merge(node,node1);
    printf("THE MERGED LINKED LIST IS:\n");
    print(node2);
    return 0;
}
