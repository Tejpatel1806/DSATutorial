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
struct abc *insert(struct abc *list,char name1[],int p)
{
    struct abc *ptr;
    ptr=(struct abc*)malloc(sizeof(struct abc));
    ptr->telephone=p;
    strcpy(ptr->name,name1);
    ptr->next=list;
    return(ptr);
}
void delete(struct abc *list,char name2[])
{
    struct abc *ptr,*ptr1;
    ptr=list;
    ptr1=list->next;
    while(strcmp(ptr->next->name,name2)!=0)
    {
       ptr=ptr->next;
       ptr1=ptr1->next;
    }
    ptr->next=ptr1->next;
    free(ptr);
}
int main()
{
    struct abc *head;
    head=(struct abc *)malloc(sizeof(struct abc));
    create(head);
    print(head);
    int r;
    printf("do you want to insert or delete the customer?if insert then press 1 and if delete then press 2:\n");
    scanf("%d",&r);
    if(r==1)
    {
        struct abc *ptr2;
        char sdf[25];
        int u;
        printf("Enter the details of name and customer telephone:\n");
        scanf("%s %d",&sdf,&u);
        ptr2=insert(head,sdf,u);
        print(ptr2);
    }
    if(r==2)
    {
        char cvg[25];
        printf("Enter the name of the customer do you want to delete details:\n");
        scanf("%s",cvg);
        delete(head,cvg);
        print(head);
    }
    return 0;
}