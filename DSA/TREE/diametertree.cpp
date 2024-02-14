#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;
};
int maximumheight(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = maximumheight(root->left);
    int rh = maximumheight(root->right);
    return 1 + max(lh, rh);
}
int maxi = 0;
void diametertree(tree *root)
{
    int lh, rh;
    if (root == NULL)
    {
        return;
    }
    lh=maximumheight(root->left);
    rh=maximumheight(root->right);
    maxi=max(maxi,lh+rh);
    diametertree(root->left);
    diametertree(root->right);
}
int main()
{
    tree *root = new tree();
    root->data = 5;
    tree *p1 = new tree();
    p1->data = 15;
    tree *p2 = new tree();
    p2->data = 25;
    tree *p3 = new tree();
    p3->data = 35;
    tree *p4 = new tree();
    p4->data = 45;
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = NULL;
    p2->right = p4;
    p2->left = NULL;
    p3->left = NULL;
    p3->right = NULL;
    p4->left = NULL;
    p4->right = NULL;
    diametertree(root);
    cout<<"DIAMETER OF TREE IS: "<<maxi<<endl;
    return 0;
}