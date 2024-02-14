#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int detectcycle(struct Node *head)
{
    struct Node *slow;
    struct Node *fast;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}

void removecycle(struct Node *head)
{
    struct Node *slow;
    struct Node *fast;
    slow=head;
    fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
        
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    fourth->next = second;

    int a;
    a=detectcycle(head);
   if(a==1)
   {
       printf("cycle is present\n");
   }
   else
   {
       printf("cycle is not present\n");
   }
   removecycle(head);
   int b;
    b=detectcycle(head);
   if(b==1)
   {
       printf("cycle is present\n");
   }
   else
   {
       printf("cycle is not present\n");
   }
   return 0;
}