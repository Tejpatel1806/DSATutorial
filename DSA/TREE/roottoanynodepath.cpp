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
bool getpath(tree * root,vector<int> &arr,int x)
{
    if(root==NULL)
    {
        return false;
    }
    arr.push_back(root->data);
    if(root->data==x)
    {
        return true;
    }
    if(getpath(root->left,arr,x) || getpath(root->right,arr,x))
    {
        return true;
    }
    arr.pop_back();
    return false;
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
    vector<int> arr;
    if(getpath(p,arr,5))
    {
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        cout<<"No path is exist: ";
    }
    return 0;
}