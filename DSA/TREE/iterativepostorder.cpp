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
void iterativepostorder(tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    stack<tree *> s1,s2;
    s1.push(root);
    tree * j;
    while(!s1.empty())
    {
         j=s1.top();
         s1.pop();
         s2.push(j);
         if(j->left!=NULL)
         {
             s1.push(j->left);
         }
         if(j->right!=NULL)
         {
             s1.push(j->right);
         }
    }
    while(!s2.empty())
    {
        j=s2.top();
        s2.pop();
        cout<<j->data<<" ";
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
    iterativepostorder(p);
    return 0;
}