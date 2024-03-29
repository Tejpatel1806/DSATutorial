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
vector<int> topview(tree *root)
{
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    map<int,int> mapp;
    queue<pair<tree *,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        tree * node=it.first;
        int line=it.second;
        if(mapp.find(line)==mapp.end())
        {
            mapp[line]=node->data;
        }
        if(node->left!=NULL)
        {
            q.push({node->left,line-1});
        }
        if(node->right!=NULL)
        {
            q.push({node->right,line+1});
        }
    }
    for(auto it:mapp)
    {
        ans.push_back(it.second);
    }
    return ans;

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
    vector<int> res=topview(p);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
