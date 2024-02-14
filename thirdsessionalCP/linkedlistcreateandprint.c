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
    struct abc *ptr;
    ptr=list;
  while(ptr!=NULL)
  {
      printf("%d ",ptr->number);
      ptr=ptr->next;
  }
}
int main()
{
    struct abc *node;
    node=(struct abc*)malloc(sizeof(struct abc));
    create(node);
    print(node);
    return 0;
}