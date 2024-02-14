#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
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
int lengthofnode(struct Node *head)
{
    int l=0;
    struct Node *p=head;
    while(p!=NULL)
    {
        p=p->next;
        l++;
    }
    return l;
}
struct Node *knodeappend(struct Node *head,int k)
{
    struct Node *newhead=(struct Node *)malloc(sizeof(struct Node));
    struct Node *newtail=(struct Node *)malloc(sizeof(struct Node));
    struct Node *tail=(struct Node *)malloc(sizeof(struct Node));
    tail=head;
    int g=lengthofnode(head);
    int count=0;
    while(tail->next!=NULL)
    {
        if(count==g-k)
        {
            newtail=tail;
        }
        if(count==g-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }  
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    linkedListTraversal(head);
    printf("\n");
    struct Node *newhead;
    newhead=(struct Node *)malloc(sizeof(struct Node));
    newhead=knodeappend(head,2);
    //linkedListTraversal(newhead);
    return 0;
}