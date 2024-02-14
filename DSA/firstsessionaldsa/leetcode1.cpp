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
    p1->data=12;
    p1->next=p2;
    p2->data=14;
    p2->next=p3;
    p3->data=16;
    p3->next=p4;
    p4->data=18;
    p4->next=NULL;
    int left=2,right=3;
    if(left<=right)
    {
        Node *u=new Node;
        u->next=p1;
        Node *s=p1;
        int count=0;
        while(s!=NULL)
        {
            count++;
            if(count==left)
            {
                Node *p=NULL;
                Node *q=s;
                Node *r;
                while(q!=NULL&& count<=right)
                {
                    r=q->next;
                    q->next=p;
                    p=q;
                    q=r;
                    count++;
                }   
                u->next=p;
                break;
                //p is new node after rotation
            }
            s=s->next;
            u=u->next;
        }
    }
    cout<<p1->data<<" "<<p2->data<<" "<<p3->data<<" "<<p4->data;
}