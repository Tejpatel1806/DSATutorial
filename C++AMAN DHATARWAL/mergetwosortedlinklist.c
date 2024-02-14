#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *merge(struct Node *head,struct Node *head1)
{
    struct Node *p1=head;
    struct Node *p2=head1;
    struct Node *dummynode;
    dummynode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p3=dummynode;
    p3=(struct Node *)malloc(sizeof(struct Node));
    while(p1!=NULL && p2!=NULL)
    {
    if(p1->data<p2->data)
    {
       p3->next=p1;
       p1=p1->next;
    }
    else
    {
         p3->next=p2;
         p2=p2->next;
    }
    p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
     while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
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
    head->data = 1;
    head->next = second;

    // Link second and third nodes
    second->data = 4;
    second->next = third;

    // Link third and fourth nodes
    third->data = 5;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 7;
    fourth->next = NULL;

    linkedListTraversal(head);
    printf("\n");
    struct Node *head1;
    struct Node *second1;
    struct Node *third1;

    // Allocate memory for nodes in the linked list in Heap
    head1 = (struct Node *)malloc(sizeof(struct Node));
    second1 = (struct Node *)malloc(sizeof(struct Node));
    third1 = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head1->data = 2;
    head1->next = second1;

    // Link second and third nodes
    second1->data = 3;
    second1->next = third1;

    // Link third and fourth nodes
    third1->data = 6;
    third1->next = NULL;

    linkedListTraversal(head1);
    printf("\n");
    struct Node *newhead;
    newhead=(struct Node *)malloc(sizeof(struct Node));
     newhead=merge(head,head1);
    // printf("%d",newhead->data);
     //linkedListTraversal(newhead);

    return 0;
}
