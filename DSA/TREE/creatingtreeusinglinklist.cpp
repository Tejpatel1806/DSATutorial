#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *left;
    node *right;
};
struct node *root = NULL;
queue<struct node *> q;
void inorder(struct node *root)
{
    if(root!=NULL)
    { 
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
    }
}
void createtree()
{
    struct node *t, *p;
    int x;
    cout << "Enter the root value: "<< " ";
    cin >> x;
    root = new node;
    root->data = x;
    root->left = root->right = NULL;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter the left child of: " << p->data <<": "<< " ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
            p->left = t;
            q.push(t);
        }
        cout << "Eneter right child of " << p->data <<": " <<" ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
            p->right = t;
            q.push(t);
        }
    }
}
int main()
{
    createtree();
    inorder(root);
    return 0;
}