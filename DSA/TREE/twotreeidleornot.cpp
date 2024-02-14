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
bool issame(tree *root1,tree *root2)
{
    if(root1==NULL || root2==NULL)
    {
        return(root1==root2);
    }
    return(root1->data==root2->data && issame(root1->left,root2->left) && issame(root1->right,root2->right));
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
    class tree *q = create(4);
    class tree *q1 = create(1);
    class tree *q2 = create(6);
    class tree *q3 = create(5);
    class tree *q4 = create(2);
    q->left = q1;
    q->right = q2;
    q1->right=q4;
    q1->left=q3;
    if(issame(p,q))
    {
        cout<<"BOTH TREE ARE SAME: "<<endl;
    }
    else
    {
        cout<<"BOTH TREE ARE NOT  SAME: "<<endl;
    }
    return 0;
}