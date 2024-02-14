#include<iostream>
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
vector<int> getinorder(tree *root)
{
    vector<int> inorder;
    tree *curr=root;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
             inorder.push_back(curr->data);
             curr=curr->right;
        }
        else
        {
            tree *prev=curr->left;
            while(prev->right!=NULL && prev->right!=curr)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                  prev->right=curr;
                  curr=curr->left;
            }
            else
            {
                prev->right=NULL;
                inorder.push_back(curr->data);
                curr=curr->right;

            }
        }
    }
    return inorder;
}
vector<int> getpreorder(tree * root)
{
    vector<int> preorder;
    tree *curr=root;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
             preorder.push_back(curr->data);
             curr=curr->right;
        }
        else
        {
            tree *prev=curr->left;
            while(prev->right!=NULL && prev->right!=curr)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                  prev->right=curr;
                  preorder.push_back(curr->data);
                  curr=curr->left;
            }
            else
            {
                prev->right=NULL;
                curr=curr->right;

            }
        }
    } 
    return preorder;
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
    p1->right=p4;
    p1->left=p3;
    vector<int> ans=getinorder(p);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}