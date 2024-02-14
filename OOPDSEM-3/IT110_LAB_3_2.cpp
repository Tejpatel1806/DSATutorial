
#include <iostream>
using namespace std;

void swapof3(int &a, int &b, int &c)
{

    int temp = 0;

    temp = a;
    a = c;
    c = b;
    b = temp;
}
int main()
{
    int a, b, c;
    cout << "Enter 3 Numbers" << endl;
    cin >> a >> b >> c;

    swapof3(a, b, c);

    cout << endl
         << "After Swapping of 3 numbers " << endl
         << a << " " << b << " " << c << endl;

    return 0;
}