#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void linkedListTraversal(struct Node *ptr)
{
    struct Node *p=ptr;
    while(p!= NULL)
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    }
}
struct Node *insertatfirst(struct Node *head,int data)
{
    struct Node *q;
    q=(struct Node *)malloc(sizeof(struct Node));
    q->data=data;
    q->next=head;
    q->prev=NULL;
    head->prev=q;
    return q;
}
struct Node *insertatlast(struct Node *head,int data)
{
    struct Node *p=head;
    struct Node *q;
    q=(struct Node *)malloc(sizeof(struct Node));
    q->data=data;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    q->prev=p;
    q->next=NULL;
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
    head->data = 4;
    head->next = second;
    head->prev=NULL;

    // Link second and third nodes
    second->data = 3;
    second->next = third;
    second->prev=head;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;
    third->prev=second;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev=third;
    linkedListTraversal(head);
    printf("\n");
    //head=insertatlast(head,8521);
    head=insertatfirst(head,4125);
    linkedListTraversal(head);
    return 0;
}