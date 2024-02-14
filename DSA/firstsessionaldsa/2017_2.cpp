// Implement the operations of stack (push, pop) and queue (add, delete) using singly
// linked list.
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} *top = NULL;
void push(int x)
{
    struct Node *t;
    if (t == NULL)
    {
        cout << "stack is full";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
void pop()
{
    struct Node *p;
    if (top == NULL)
    {
        cout << "stack is empty";
    }
    else
    {
        p = top;
        top = top->next;
        free(p);
    }
}
