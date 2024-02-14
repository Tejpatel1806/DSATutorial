#include<iostream>
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


//another way of search function 

// tree *search(tree *root,int data1)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==data1)
//     {
//         return root;
//     }
//     else if(root->data > data1)
//     {
//         return search(root->left,data1);
//     }
//     else
//     {
//         return search(root->right,data1);
//     }
// }
tree *search(tree *root,int data1)
{
    while(root!=NULL)
    {
        if(root->data==data1)
        {
            return root;
        }
        else if(root->data > data1)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return NULL;
}
int main()
{
    class tree *p = create(5);
    class tree *p1 = create(4);
    class tree *p2 = create(6);
    class tree *p3 = create(1);
    class tree *p4 = create(3);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p3->right = p4;
    int key;
    cout<<"ENTER THE DATA DO YOU WANT TO SEARCH IN BST: ";
    cin>>key;
    class tree *i1;
    i1=search(p,key);
    if(i1==NULL)
    {
        cout<<"DATA DOES NOT FOUND: ";
    }
    else
    {
        cout<<"DATA FOUND: ";
        cout<<i1->data;
    }
}