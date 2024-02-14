//Aim: Implement the Doubly Link-List.
#include <iostream>
using namespace std;
class impl;
class node
{
    friend class impl;

private:
    int data;
    node *next;
    node *prev;

public:
    node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class impl
{
    friend class node;
    node *first;

public:
    impl()
    {
        first = NULL;
    }

    void _insert(int d)
    {
        node *nn = new node(d);
        nn->data = d;
        nn->next = first;
        nn->prev = NULL;
        first = nn;
    }

    void insert_end(int n)
    {
        node *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        node *nn = new node(n);
        temp->next = nn;
        nn->prev = temp;
    }

    void insert_after(int n, int new_data)
    {
        node *temp = first;
        while (temp->next != NULL && temp->data != n)
        {
            temp = temp->next;
        }
        node *nn = new node(new_data);
        nn->prev = temp;
        nn->next = temp->next;
        nn->next->prev = nn;
        temp->next = nn;
    }

    void insert_before(int n, int new_data)
    {
        node *temp = first;
        while (temp->next != NULL && temp->data != n)
        {
            temp = temp->next;
        }
        node *nn = new node(new_data);
        nn->prev = temp->prev;
        nn->next = temp;
        temp->prev->next = nn;
        temp->prev = nn;
    }

    void Delete(int n)
    {
        node *temp = first;
        if (first->data == n)
        {
            first->next->prev = NULL;
            first = first->next;
        }
        while (temp->data != n && temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }

    void delete_before(int n)
    {
        if (first->next->data == n)
        {
            first = first->next;
        }
        node *temp = first;
        while (temp->data != n && temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->prev->next = temp;
        temp->prev = temp->prev->prev;
    }

    void delete_after(int n)
    {
        if (first->next->next == NULL)
        {
            first->next = NULL;
        }
        node *temp = first;
        while (temp->data != n && temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next->prev = temp;
        temp->next = temp->next->next;
    }

    void display()
    {
        node *temp = first;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    impl i;
    i._insert(1);
    i.insert_end(2);
    i.insert_end(3);
    i.insert_end(4);
    i.insert_end(7);
    i.display();
    i.insert_before(7, 8);
    i.display();
    i.insert_after(4, 5);
    i.insert_after(5, 6);
    i.display();
    i.Delete(4);
    i.display();
    i.delete_before(7);
    i.display();
    i.delete_after(3);
    i.display();
}
