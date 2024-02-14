#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void create(node *pyt)
{
    cin >> (pyt->data);
    if (pyt->data != -110)
    {
        node *poi;
        poi = new node;
        pyt->next = poi;
        create(poi);
    }
    else
    {
        pyt->next = NULL;
    }
}
void print(node *uio)
{
    node *rtu = uio;
    while (rtu->next != NULL)
    {
        cout << (rtu->data) << " ";
        rtu = rtu->next;
    }
    cout << endl;
}
void delete5(node *head, int val)
{
    node *head1 = head;
    while (head1 != NULL && head1->next != NULL)
    {
        if (head1->next->data == val)
        {
            head1->next = head1->next->next;
        }
        else
        {
            head1 = head1->next;
        }
    }
}
node *firstdelete(node *pyu)
{
    node *ioj = pyu->next;
    delete (pyu);
    return (ioj);
}
int main()
{
    node *first;
    first = new node;
    create(first);
    print(first);
    delete5(first, 6);
    node *final;
    if (first->data == 6)
    {
        final = firstdelete(first);
        print(final);
    }
    else
    {
        print(first);
    }
    return 0;
}