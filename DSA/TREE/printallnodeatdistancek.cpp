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
void markparent(tree *root, unordered_map<tree *, tree *> &parenttrack, tree *target)
{
    queue<tree *> queue;
    queue.push(root);
    while (!queue.empty())
    {
        tree *current = queue.front();
        queue.pop();
        if (current->left)
        {
            parenttrack[current->left] = current;
            queue.push(current->left);
        }
        if (current->right)
        {
            parenttrack[current->right] = current;
            queue.push(current->right);
        }
    }
}
vector<int> distanceK(tree *root, tree *target, int k)
{
    unordered_map<tree *, tree *> parent_track; // node -> parent
    markparent(root, parent_track, target);

    unordered_map<tree *, bool> visited;
    queue<tree *> queue;
    queue.push(target);
    visited[target] = true;
    int curr_level = 0;
    while (!queue.empty())
    { 
        /*Second BFS to go upto K level from target node and using our hashtable info*/
        int size = queue.size();
        if (curr_level++ == k)
            break;
        for (int i = 0; i < size; i++)
        {
            tree *current = queue.front();
            queue.pop();
            if (current->left && !visited[current->left])
            {
                queue.push(current->left);
                visited[current->left] = true;
            }
            if (current->right && !visited[current->right])
            {
                queue.push(current->right);
                visited[current->right] = true;
            }
            if (parent_track[current] && !visited[parent_track[current]])
            {
                queue.push(parent_track[current]);
                visited[parent_track[current]] = true;
            }
        }
    }
    vector<int> result;
    while (!queue.empty())
    {
        tree *current = queue.front();
        queue.pop();
        result.push_back(current->data);
    }
    return result;
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
}