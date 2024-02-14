#include<iostream>
using namespace std;
class node
{
    public:
    int exp;
    int employeeid;
    node *next;
};
void create(node *head,int n)
{
    cin>>head->exp;
    cin>>head->employeeid;
    if(n==0)
    {
         head->next=NULL;
    }
    else
    {
        node *p=new node;
        head->next=p;
        create(p,--n);
    }
}
void decreasingorderofexperince(node *head)
{
    for(node *r=head;r!=NULL;r=r->next)
    {
        for(node *y=r->next;y!=NULL;y=y->next)
        {
            if(r->exp<y->exp)
            {
                int temp=r->exp;
                r->exp=y->exp;
                y->exp=temp;
                int temp1=r->employeeid;
                r->employeeid=y->employeeid;
                y->employeeid=temp1;
            }
        }
    }
    node *o=head;
    cout<<"The Information of employee which is highest experience is : "<<o->exp<<endl;
    while(o!=NULL)
    {
        cout<<"EXPERIENCE:- "<<o->exp<<" "<<" employee id is: "<<o->employeeid<<endl;
        o=o->next;
    }
}
void insertatlast(node *head)
{
    node *p=head;
    node *q=new node;
    cout<<"ENTER THE NEW EMPLOYEE EXPERIENCE AND EMPLOYEE ID: ";
    cin>>q->exp>>q->employeeid;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    q->next=NULL;
}
int main()
{
    int n,p;
    cout<<"ENTER THE NUMBER OF EMPLOYEE WORKING IN ORGANIZATION: ";
    cin>>n;
    node *first=new node;
    create(first,n-1);
    cout<<"IF YOU WANT TO ADDED NEW EMPLOYEE IN ORGANIZATION THEN ENTER 1: ";
    cin>>p;
    if(p==1)
    {
        insertatlast(first);
    }
    decreasingorderofexperince(first);
    return 0;
}