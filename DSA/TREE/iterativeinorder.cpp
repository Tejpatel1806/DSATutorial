#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;
};
tree *create(int data1)
{
    class tree *n;
    n = new tree;
    n->data = data1;
    n->left = NULL; 
    n->right = NULL;
    return n;
}
void iterativeinorder(tree * root)
{
    stack<tree *> p;
    tree *curr=root;
    while(curr!=NULL || p.empty()==false)
    {
        while(curr!=NULL)
        {
            p.push(curr);
            curr=curr->left;
        }
        curr =p.top();
        p.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
int main()
{
    class tree *p = create(4);
    class tree *p1 = create(1);
    class tree *p2 = create(6);
    class tree *p3 = create(5);
    class tree *p4 = create(2);
    p->left = p1;
    p->right = p2;
    p1->right=p4;
    p1->left=p3;
    return 0;
}