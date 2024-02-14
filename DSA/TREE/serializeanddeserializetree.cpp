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
string serialize(tree *root)//encode a tree to a single string
{
    if (root == NULL)
    {
        return;
    }
    string s = "";
    queue<tree *> q;
    q.push(root);
    while (!q.empty())
    {
        tree *currnode = q.front();
        q.pop();
        if (currnode == NULL)
        {
            s.append("#,");
        }
        else
        {
            s.append(to_string(currnode->data) + ",");
        }
        if (currnode != NULL)
        {
            q.push(currnode->left);
            q.push(currnode->right);
        }
    }
    cout << s;
    return s;
}
tree * deser(string data)//decode a string into tree
{
    if(data.size()==0)
    {
        return NULL;
    }
    stringstream s(data);
    string str;
    getline(s,str,',');
    tree *root=create(stoi(str));
    queue<tree *> q;
    q.push(root);
    while(!q.empty())
    {
        tree *node=q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#")
        {
            node->left=NULL; 
        }
        else
        {
            tree *leftnode=create(stoi(str));
            node->left=leftnode;
            q.push(leftnode);
        }
        getline(s,str,',');
        if(str=="#")
        {
            node->right=NULL; 
        }
        else
        {
            tree *rightnode=create(stoi(str));
            node->right=rightnode;
            q.push(rightnode);
        }
        
    }
    return root;
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
    string s=serialize(p);
    class tree *root=deser(s);
    return 0;
}