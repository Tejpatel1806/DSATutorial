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
void zigzagtreetraversal(tree *root)
{
    stack<tree *> currentlevel;
    stack<tree *> nextlevel;
    bool lefttoright = true;
    currentlevel.push(root);
    while (!currentlevel.empty())
    {
        tree *o = currentlevel.top();
        currentlevel.pop();
        if (o != NULL)
        {
            cout << o->data << " ";
            if (lefttoright)
            {
                if (o->left != NULL)
                {
                    nextlevel.push(o->left);
                }
                if (o->right != NULL)
                {
                    nextlevel.push(o->right);
                }
            }
            else
            {
                if (o->right != NULL)
                {
                    nextlevel.push(o->right);
                }
                if (o->left != NULL)
                {
                    nextlevel.push(o->left);
                }
            }
        }
        if(currentlevel.empty())
        {
            lefttoright=!lefttoright;
            swap(currentlevel,nextlevel);
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
    p1->right = p4;
    p1->left = p3;
    zigzagtreetraversal(p);
    return 0;
}