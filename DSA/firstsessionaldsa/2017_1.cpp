// (a) Write an algorithm to perform following operations on singly linked list:
// 1) Insert a new node having value X after the existing node having value Y.
// 2) Deletions of a node before the existing node having value X.
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
void fun2(struct Node*head,int x)
{
    struct Node*p=head;
    struct Node*q=head->next;
    struct Node*r=head->next->next;
    if(q->data==x)
    {
        free(p);
    }
    else
    {
      while(r->data!=x)
      {
          p=p->next;
          q=q->next;
          r=r->next;
      }  
      p->next=r;
      free(q);
    }
}