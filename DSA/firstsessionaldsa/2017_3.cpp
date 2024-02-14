// Write algorithm for following operations using singly link list
// 1) Insert new node X after existing node have value Y
// 2) Insert new node at end
//3)Delete node after the node having value X
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
};
void fun1(struct Node *head,int x,int y)
{
    struct Node*p=head;
    struct Node*q=new Node;
    q->data=x;
    if(p->data==y)
    {
        q->next=p->next;
        p->next=q;
    }
}
void fun2(struct Node *head,int c)
{
    struct Node*p=head;
    struct Node*q=new Node;
    q->data=c;
    while(p->next!=NULL)
    {
       p=p->next;
    }
    p->next=q;
    q->next=NULL;
}
void fun3(struct Node*head,int y)
{
    struct Node*p=head;
    while(p->data!=y)
    {
        p=p->next;
    }
    p->next=p->next->next;
    free(p->next);
}