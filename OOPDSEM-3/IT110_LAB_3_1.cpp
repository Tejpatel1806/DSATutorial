#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Distance
{
    int feet;
    float inches;

    void input()
    {
        cout << "Enter Feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
        if (inches >= 12)
        {
            feet = feet + (inches / 12);
            int temp = inches / 12;
            inches = inches - 12 * temp;
        }
    }
    void display()
    {
        cout << "Distance is " << feet << " feet and " << inches << " inches" << endl;
    }
    void add(Distance a, Distance b)

    {
        Distance c;
        c.feet = a.feet + b.feet;
        c.inches = a.inches + b.inches;
        if (c.inches > 12)
        {
            c.feet = c.feet + (c.inches / 12);
            int temp = c.inches / 12;
            c.inches = c.inches - 12 * temp;
        }

        c.display();
    }
};
int main()
{
    Distance d1, d2;
    cout << "    Enter Distance 1" << endl;
    d1.input();
    cout << endl
         << "    Enter Distance 2" << endl;

    d2.input();

    cout << endl
         << endl
         << "    Performing Addition" << endl;

    d1.add(d1, d2);
}
