#include <iostream>
using namespace std;
class Linkdlist
{
public:
    int number;
    Linkdlist *next;
};
void create(Linkdlist *head)
{
    cin >> (head->number);
    if (head->number != -110)
    {
        Linkdlist *temp;
        temp = new Linkdlist;
        head->next = temp;
        create(temp);
    }
    else
    {
        head->next = NULL;
        return;
    }
}
void print(Linkdlist *head)
{
    Linkdlist *temp2 = head;
    while (temp2->next != NULL)
    {
        cout << (temp2->number) << " ";
        temp2 = temp2->next;
    }
}
class Linkdlist *insert(Linkdlist *head, int g, int h)
{
    class Linkdlist *temp3 = new Linkdlist;
    class Linkdlist *temp4 = head;
    int i = 0;
    while (i != h - 1)
    {
        temp4 = temp4->next;
        i++;
    }
    temp3->number = g;
    temp3->next = temp4->next;
    temp4->next = temp3;
    return head;
}
class Linkdlist *insertfirst(class Linkdlist *head, int x)
{
    class Linkdlist *temp5 = new Linkdlist;
    temp5->number = x;
    temp5->next = head;
    return temp5;
}
class Linkdlist *insertlast(class Linkdlist *head, int c)
{
    class Linkdlist *temp6 = new Linkdlist;
    temp6->number = c;
    class Linkdlist *temp7 = head;
    while (temp7->next->next != NULL)
    {
        temp7 = temp7->next;
    }
    delete (temp7->next);
    temp7->next = temp6;
    class Linkdlist *temp52 = new Linkdlist;
    temp52->number = 120;
    temp6->next = temp52;
    temp52->next = NULL;
    return head;
}
int main()
{
    Linkdlist *head;
    head = new Linkdlist;
    create(head);
    int t1;
    cout << "do you want to insert first(1),middle(2),last(3): ";
    cin >> t1;
    if (t1 == 2)
    {
        int a, b;
        cout << "enter the element do you want to insert and also enter index do you want to insert: ";
        cin >> a >> b;
        class Linkdlist *tej12 = insert(head, a, b);
        print(tej12);
    }
    else if (t1 == 1)
    {
        int m;
        cout << "enter the element do you want to insert first: ";
        cin >> m;
        class Linkdlist *tej = insertfirst(head, m);
        print(tej);
    }
    else if (t1 == 3)
    {
        int m1;
        cout << "enter the element do you want to insert last: ";
        cin >> m1;
        class Linkdlist *imp = insertlast(head, m1);
        print(imp);
    }
    return 0;
}
