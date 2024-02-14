#include <iostream>
#include <bits/stdc++.h>
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
int findceil(tree *root,int key)
{
    int ceil=-1;
    while(root!=NULL)
    {
        if(root->data == key)
        {
            ceil=root->data;
            return ceil;
        }
        if(key>root->data)
        {
            root=root->right;
        }
        else
        {
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}
int main()
{
    class tree *p = create(4);
    class tree *p1 = create(2);
    class tree *p2 = create(6);
    class tree *p3 = create(1);
    class tree *p4 = create(3);
    p->left = p1;
    p->right = p2;
    p1->right = p4;
    p1->left = p3;
    cout<<findceil(p,3 );
    return 0;
}