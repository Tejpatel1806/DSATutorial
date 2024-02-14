//linklist che ane tema as a data character che to te linklist na vowel linklist na first ma aava joie
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    char data;
    Node *next;
};
int main()
{
    vector<char> s;
    vector<char> s1;
    Node *p1=new Node;
    Node *p2=new Node;
    Node *p3=new Node;
    Node *p4=new Node;
    p1->data='a';
    p1->next=p2;
    p2->data='k';
    p2->next=p3;
    p3->data='i';
    p3->next=p4;
    p4->data='o';
    p4->next=NULL;
    Node*u=p1;
    while(u!=NULL)
    {
        if(u->data=='a'||u->data=='e'||u->data=='i'||u->data=='o'||u->data=='u')
        {
              s.push_back(u->data);
        }
        else
        {
              s1.push_back(u->data);
        }
        u=u->next;
    }
    Node *i=p1;
    for(int s4=0;s4<s.size();s4++)
    {
        i->data=s[s4];
        i=i->next;   
    }
    for(int s5=0;s5<s1.size();s5++)
    {
        i->data=s1[s5];
        i=i->next;
    }
    cout<<p1->data<<" "<<p2->data<<" "<<p3->data<<" "<<p4->data;
    return 0;
}