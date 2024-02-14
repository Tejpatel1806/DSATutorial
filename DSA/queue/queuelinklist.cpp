#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *front = NULL, *rear = NULL;
void enqueue(int x)
{
    node *t = new node;
    if (t == NULL)
    {
        cout << "QUEUE IS FULL";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue()
{
    int x = -1;
    node *p;
    if (front == NULL)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data;
        free(p);
    }
    return x;
}
void Display()
{
    struct node *p = front;
    while (p)
    {
        cout << p->data;
        p = p->next;
    }
    cout << " ";
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    Display();
    cout<<dequeue();
    return 0;
}