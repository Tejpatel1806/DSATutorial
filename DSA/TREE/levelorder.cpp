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
void printlevelorder(tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<tree *> q;
    q.push(root);
    while(q.empty()== false)
    {
        tree * p=q.front();
        cout<<p->data<<" ";
        q.pop();
        if(p->left!=NULL)
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }
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
    printlevelorder(p);
    return 0;
}