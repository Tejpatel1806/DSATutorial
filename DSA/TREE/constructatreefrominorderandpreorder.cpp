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
tree *buildtree(vector<int> &preorder, vector<int> &inorder)
{
    map<int, int> inmap;
    for (int i = 0; i < inorder.size(); i++)
    {
        inmap[inorder[i]] = i;
    }
    return buildtree1(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inmap);
}
tree *buildtree1(vector<int> &preorder, int prestart, int preend, vector<int> &inorder, int instart, int inend, map<int, int> inmap)
{
    if (prestart > preend || instart > inend)
    {
        return NULL;
    }
    tree *root = create(preorder[prestart]);
    int inroot = inmap[root->data];
    int numsleft = inroot - instart;
    root->left = buildtree1(preorder, prestart + 1, prestart + numsleft, inorder, instart, inroot - 1, inmap);
    root->right = buildtree1(preorder, prestart + 1 + numsleft, preend, inorder, inroot + 1, inend, inmap);
    return root;
}
int main()
{
    vector<int> inorder;
    cout << "ENTER THE INORDER OF THE FOLLOWING TREE:";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        inorder.push_back(x);
    }
    vector<int> preorder;
    cout << "ENTER THE PREORDER OF THE FOLLOWING TREE:";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        preorder.push_back(x);
    }
    class tree *p = buildtree(inorder, preorder);
    return 0;
}