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
int main()
{

    // 1>first way to create tree but not a sufficient way

    //     //constructing root node
    //     class tree *p;
    //     p = new tree;
    //     p->data=2;
    //     p->left = NULL;
    //     p->right = NULL;

    //     //constructing second node
    //     class tree *p1;
    //     p1 = new tree;
    //     p1->data=11;
    //     p1->left = NULL;
    //     p1->right = NULL;

    //     //constructing third node
    //     class tree *p2;
    //     p2 = new tree;
    //     p2->data=52;
    //     p2->left = NULL;
    //     p2->right = NULL;

    //    //linked the node
    //     p->left=p1;
    //     p->right=p2;
    class tree *p = create(2);
    class tree *p1 = create(11);
    class tree *p2 = create(52);
    p->left = p1;
    p->right = p2;
    return 0;
}