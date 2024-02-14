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
vector<vector<int>> verticalordertraversal(tree * root)
{
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<tree *,pair<int,int>>> todo;
    todo.push({root,{0,0}});
    while(!todo.empty())
    {
        auto p=todo.front();
        todo.pop();
        tree * node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->data);
        if(node->left)
        {
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right)
        {
            todo.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p:nodes)
    {
        vector<int> col;
        for(auto q:p.second)
        {
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
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
    vector<vector<int>> ans1;
    ans1=verticalordertraversal(p);
    return 0;
}