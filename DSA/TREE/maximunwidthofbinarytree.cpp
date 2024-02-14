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
int maximumwidth(tree * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=0;
    queue<pair<tree *,int>> q;//node ane eni indexing
    q.push({root,0});
    while(!q.empty())
    {
        int size=q.size();
        int mmin=q.front().second;
        int first,last;
        for(int i=0;i<size;i++)
        {
            int curid=q.front().second-mmin;
            tree * node=q.front().first;
            q.pop();
            if(i==0)
            {
                first=curid;
            }
            if(i==size-1)
            {
                last=curid;
            }
            if(node->left)
            {
                q.push({node->left,curid*2+1});
            }
            if(node->right)
            {
                q.push({node->right,curid*2+2});
            }
        }
        ans=max(ans,last-first+1);
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
    p1->right = p4;
    p1->left = p3;
    cout<<"MAXIMUM WIDTH OF TREE IS: "<<maximumwidth(p)<<endl;
    return 0;
}