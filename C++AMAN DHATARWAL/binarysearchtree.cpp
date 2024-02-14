#include <iostream>
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
bool ISBST(class tree *root, class tree *min = NULL, class tree *max = NULL)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftvalid = ISBST(root->left, min, root);
    bool rightvalid = ISBST(root->right, root, max);
    return leftvalid and rightvalid;
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
    if (ISBST(p, NULL, NULL))
    {
        cout << "BST TREE" << endl;
    }
    else
    {
        cout << "NOT BST";
    }
    return 0;
}