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
bool issymmetrichelp(tree *left, tree *right)
{
    if (left == NULL || right == NULL)
    {
        return left == right;
    }
    if (left->data != right->data)
    {
        return false;
    }
    return issymmetrichelp(left->left, right->right) && issymmetrichelp(left->right, right->left);
}
bool issymmetric(tree *root)
{
    return root == NULL || issymmetrichelp(root->left, root->right);
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
    if (issymmetric(p))
    {
        cout << "YES IT IS SYMMETRIC TREE ";
    }
    else
    {
        cout << "NO IT IS NOT A SYMMETRIC TREE ";
    }
    return 0;
}