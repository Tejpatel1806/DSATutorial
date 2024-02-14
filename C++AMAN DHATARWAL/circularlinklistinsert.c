#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
    struct Node *p=head;
    while(p->next!=head)
    {
        printf("element is:%d\n",p->data);
        p=p->next;
    }
    printf("element is:%d\n",p->data);
}
struct Node * insertatfirst(struct Node *head,int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node * insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *p=head;
    struct Node * ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    int i=0;
    while(i!=index-1)
    {
       p=p->next;
       i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node *insertatlast(struct Node *head,int data)
{
    struct Node *p;
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = head;

    linkedListTraversal(head);
    printf("\n");
    head=insertatfirst(head,85);
    head=insertAtIndex(head,54,2);
    head=insertatlast(head,451);
    linkedListTraversal(head);
    return 0;
}