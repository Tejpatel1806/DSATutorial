// Perform following operations on linked list:
// 1) insert a node in between two nodes
// 2) deletion of node whose value passed in argument of a function
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
};
void insertnodebet(Node *p1,Node*p2,int val)
{
   Node *p3=new Node;
   p3->data=val;
   p3->next=p2;
   p1->next=p3;
}
void deletion(int val,Node *head)
{
    Node*p=head;
    while(p->next->data!=val)
    {
        p=p->next;
    }
    p->next=p->next->next;
}