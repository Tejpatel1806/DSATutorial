#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct abc
{
    char name[20];
    int telephone;
    struct abc *next;
};
void print(struct abc *list)
{
    struct abc *ptr1;
    ptr1=list;
    while(ptr1!=NULL)
    {
        printf("%s %d\n",ptr1->name,ptr1->telephone);
        ptr1=ptr1->next;
    }
}
void create(struct abc *list)
{
    scanf("%s %d",list->name,&list->telephone);
    if(list->telephone==4587)
    {
        list->next=NULL;
    }
    else
    {
        list->next=(struct abc *)malloc(sizeof(struct abc));
        create(list->next);
    }
}
void sort(struct abc *list)
{
    struct abc *ptr,*ptr1;
    char hgj[25];
    for(ptr=list;ptr!=NULL;ptr=ptr->next)
    {
        for(ptr1=list->next;ptr1!=NULL;ptr1=ptr1->next)
        {
              if(strcmp(ptr->name,ptr1->name)>0)
              {
                  strcpy(hgj,ptr->name);
                  strcpy(ptr->name,ptr1->name);
                  strcpy(ptr1->name,hgj);
              }
        }
    }
}
int main()
{
    struct abc *head;
    head=(struct abc *)malloc(sizeof(struct abc));
    create(head);
    print(head);
    sort(head);
    print(head);
    return 0;
}