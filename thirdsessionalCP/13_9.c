#include<stdio.h>
#include<stdlib.h>
struct abc
{
    int data;
    struct abc *next;
    struct abc *prev;
};
void reverse(struct abc *list)
{
    struct abc *ptr,*ptr1;
    ptr=list;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr1=ptr;
    while(ptr1->prev!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->prev;
    }
    printf("%d ",ptr1->data);
}
int main()
{
    
    struct abc *head;
    struct abc *first;
    struct abc *second;
    struct abc *third;
    struct abc *fourth;
    head=(struct abc *)malloc(sizeof(struct abc));
    first=(struct abc *)malloc(sizeof(struct abc));
    second=(struct abc *)malloc(sizeof(struct abc));
    third=(struct abc *)malloc(sizeof(struct abc));
    fourth=(struct abc *)malloc(sizeof(struct abc));
    head->data=15;
    head->prev=NULL;
    head->next=first;
    first->data=25;
    first->prev=head;
    first->next=second;
    second->data=15;
    second->prev=first;
    second->next=third;
    third->data=35;
    third->prev=second;
    third->next=fourth;
    fourth->data=45;
    fourth->prev=third;
    fourth->next=NULL;
    reverse(head);
    return 0;
}