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
tree *buildtree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() != postorder.size())
    {
        return NULL;
    }
    map<int, int> hm;
    for (int i = 0; i < inorder.size(); i++)
    {
        hm[inorder[i]] = i;
    }
    return buildtree1(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, hm);
}
tree *buildtree1(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe, map<int, int> &hm)
{
    if (ps > pe || is > ie)
    {
        return NULL;
    }
    tree *root = create(postorder[pe]);
    int inroot = hm[postorder[pe]];
    int numsleft = inroot - is;
    root->left = buildtree1(inorder, is, inroot - 1, postorder, ps, ps + numsleft - 1, hm);
    root->right = buildtree1(inorder, inroot + 1, ie, postorder, ps + numsleft, pe - 1, hm);
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
    vector<int> postorder;
    cout << "ENTER THE PostORDER OF THE FOLLOWING TREE:";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        postorder.push_back(x);
    }
    class tree *p = buildtree(inorder, postorder);
    return 0;
}