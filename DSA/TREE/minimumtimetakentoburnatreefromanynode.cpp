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
void markparent(tree *root, unordered_map<tree *, tree *> &parenttrack)
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
int maximumtimetakentoburntree(tree *root, tree *target)
{
    unordered_map<tree *, tree *> parenttrack;
    markparent(root, parenttrack);
    int time = 0;
    int fl;
    unordered_map<tree *, bool> visited;
    queue<tree *> q;
    q.push(target);
    visited[target] = true;
    while (!q.empty())
    {
        int size = q.size();
        fl = 0;
        for (int i = 0; i < size; i++)
        {
            tree *current = q.front();
            q.pop();
            if (current->left && !visited[current->left])
            {
                q.push(current->left);
                visited[current->left] = true;
                fl = 1;
            }
            if (current->right && !visited[current->right])
            {
                q.push(current->right);
                visited[current->right] = true;
                fl = 1;
            }
            if (parenttrack[current] && !visited[parenttrack[current]])
            {
                q.push(parenttrack[current]);
                visited[parenttrack[current]] = true;
                fl = 1;
            }
        }
        if (fl == 1)
        {
            time++;
        }
    }
    return time;
}
int main()
{
    class tree *p = create(1);
    class tree *p1 = create(2);
    class tree *p2 = create(3);
    class tree *p3 = create(4);
    class tree *p4 = create(5);
    class tree *p5 = create(7);
    class tree *p6 = create(6);
    p->left = p1;
    p->right = p2;
    p1->right = p4;
    p1->left = p3;
    p3->right = p5;
    p2->left = p4;
    p2->right = p6;
    cout << maximumtimetakentoburntree(p, p1) << endl;
    return 0;
}