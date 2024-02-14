#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void sortedInsert(Node **H, int x)
{
    Node *t, *q = NULL, *p = *H;
    t = new Node(x);
    if (*H == NULL)
        *H = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

Node *search(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;

        p = p->next;
    }
    return NULL;
}

int Hash(int key)
{
    return (key % 10);
}

void insert(Node *H[], int key)
{
    int index = Hash(key);
    sortedInsert(&H[index], key);
}

int main()
{
    Node *HT[10];
    Node *temp;

    for (int i = 0; i < 10; i++)
        HT[i] = NULL;

    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 42);

    int d;
    cout << "Enter the data to find: ";
    cin >> d;

    temp = search(HT[Hash(d)], d);
    if (temp)
        cout << temp->data << " is found" << endl;
    else
        cout << d << " not found" << endl;
    return 0;
}
