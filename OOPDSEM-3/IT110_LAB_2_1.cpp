#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Menu :\n1).Addition\n2).Odd-Even\n3).Printing of first n natural numbers\n\nEnter The Number : ";

    cin >> n;

    switch (n)
    {
    case 1:
        int a, b, c;
        cout << "Enter The Two values One By One For A Addition :\n";
        cin >> a >> b;
        c = a + b;
        cout << "Addition = " << c;
        break;
    case 2:
        cout << "Enter A Number : ";

        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "Given Number Is Even";
        }
        else
        {
            cout << "Given NUmber Is Odd";
        }

        break;
    case 3:
        int p, q;
        cout << "Still Which Do Want TO First n Natural Numbers ? ";
        cin >> p;
        q = 1;
        for (int i = 1; i <= p; i++)
        {
            cout << q << " ";
            q++;
        }
        break;

    default:
        cout << "You Pressed Wrong Number";
        break;
    }
}
