#include<bits/stdc++.h>
using namespace std;
class tree 
{
    public:
    int data;
    tree *left;
    tree *right;
};
int countnode(tree * root)
{
    int ans=0;
    queue<tree *> q;
    q.push(root);
    while(!q.empty())
    {
         tree *s=q.front();
         q.pop();
         ans++;
         if(s->left!=NULL)
         {
              q.push(s->left); 
         }
         if(s->right!=NULL)
         {
             q.push(s->right);
         }
    }
    return ans;
}
int main()
{
    tree *root=new tree();
    root->data=5;
    tree *p1=new tree();
    p1->data=15;
    tree *p2=new tree();
    p2->data=25;
    tree *p3=new tree();
    p3->data=35;
    tree *p4=new tree();
    p4->data=45;
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=NULL;
    p2->right=p4;
    p2->left=NULL;
    p3->left=NULL;
    p3->right=NULL;
    p4->left=NULL;
    p4->right=NULL;
    int p=countnode(root);
    cout<<p<<endl;
     return 0;
}