// Suppose you are given following structure to store node in single linked list. 
// Template <class T> struct node{ T data; struct node *next; };
// (i)Give code snippet of a function used to reverse the directions of the list nodes. 
// Example:-
// Original input list: 1->2->3->4->5->6 Resultant Modified output list: 6->5->4->3->2-
// >1. The function declaration is : void reverse(node * first)
// (ii) Assume that the list also stores the previous node address. In this case, what changes 
// are needed in the above code? Identify and rewrite the corresponding 
// void reverse(node * first) function.
struct Node
{
    int data;
    struct Node*next;
};
struct Node* reverse(struct Node *head)
{
    struct Node*p=head;
    struct Node*q=NULL;
    struct Node *r;
    while(p!=NULL)
    {
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    }
}
