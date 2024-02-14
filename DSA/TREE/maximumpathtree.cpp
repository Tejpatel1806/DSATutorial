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
int maxpathdown(tree * node,int &maxi)
{
     if(node==NULL)
     {
         return 0;
     }
     int left=max(0,maxpathdown(node->left,maxi));
     int right=max(0,maxpathdown(node->right,maxi));
     maxi=max(maxi,left+right+node->data);
     return max(left,right)+node->data;
}
int maxpathsum(tree *root)
{
    int maxi=INT_MIN;
    maxpathdown(root,maxi);
    return maxi;
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
   int s= maxpathsum(p);
   cout<<s<<endl;
}