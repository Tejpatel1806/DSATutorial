#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *swap(Node *head, Node *head1)
{
    head1->next = head;
    return head->next;
}
int main()
{
    Node *p1 = new Node;
    Node *p2 = new Node;
    Node *p3 = new Node;
    Node *p4 = new Node;
    Node *p7 = new Node;
    Node *p8 = new Node;
    p1->data = 10;
    p1->next = p2;
    p2->data = 8;
    p2->next = p3;
    p3->data = 12;
    p3->next = p4;
    p4->data = 1;
    p4->next = p7;
    p7->data = 74;
    p7->next = NULL;
    p8->data = 85;
    p8->next = NULL;
    Node *temp = p1;
    while (temp && temp->next)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }

    cout << p1->data << " " << p2->data << " " << p3->data << " " << p4->data<<" "<<p7->data<<" "<<p8->data;
}
