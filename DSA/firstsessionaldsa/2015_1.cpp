// Write an algorithm to make one sorted linked list from given unsorted linked list.
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int main()
{
    Node *p1=new Node;
    Node *p2=new Node;
    Node *p3=new Node;
    Node *p4=new Node;
    p1->data=10;
    p1->next=p2;
    p2->data=8;
    p2->next=p3;
    p3->data=12;
    p3->next=p4;
    p4->data=1;
    p4->next=NULL;
    for(Node *p=p1;p!=NULL;p=p->next)
    {
       for(Node *p1=p->next;p1!=NULL;p1=p1->next)
       {
           if(p->data>p1->data)
           {
               int temp=p->data;
               p->data=p1->data;
               p1->data=temp;
           }
       }
    }
    cout<<p1->data<<" "<<p2->data<<" "<<p3->data<<" "<<p4->data;
}