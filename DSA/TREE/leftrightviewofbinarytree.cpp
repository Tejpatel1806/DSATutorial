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
void rightleftview(tree *root,int level,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    if(ans.size()==level)
    {
        ans.push_back(root->data);
    }
    rightleftview(root->left,level+1,ans);
    rightleftview(root->right,level+1,ans);
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
    int initiallevel=0;
    vector<int> ans;
    rightleftview(p,initiallevel,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}