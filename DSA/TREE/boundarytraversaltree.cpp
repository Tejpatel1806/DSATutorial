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
bool isLeaf(tree *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    return false;
}
void addleftboundary(tree *root, vector<int> &res)
{
    tree *cur = root->left;
    while (cur != NULL)
    {
        if (!isLeaf(cur))
        {
            res.push_back(cur->data);
        }
        if (cur->left != NULL)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
}
void addrightboundary(tree *root, vector<int> &res)
{
    tree *cur = root->right;
    vector<int> tmp;
    while (cur != NULL)
    {
        if (!isLeaf(cur))
        {
            tmp.push_back(cur->data);
        }
        if (cur->right != NULL)
        {
            cur = cur->right;
        }
        else
        {
            cur = cur->left;
        }
    }
    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        res.push_back(tmp[i]);
    }
}
void addleaves(tree *root, vector<int> &res)
{
    if (!isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if (root->left != NULL)
    {
        addleaves(root->left, res);
    }
    if (root->right != NULL)
    {
        addleaves(root->right, res);
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
    vector<int> res;
    res.push_back(p->data);
    addleftboundary(p, res);
    addleaves(p, res);
    addrightboundary(p, res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}