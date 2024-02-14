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
    if (pyt->data != 6)
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
static void reverse(node **start)
{
    node *prev=NULL;
    node *current=start;
    node *next1;
    while(current!=NULL)
    {
        next1=current->next;
        current->next=prev;
        current=next1;
    }
    *start=current;

}
int main()
{
    node *first;
    first = new node;
    create(first);
    
    
}