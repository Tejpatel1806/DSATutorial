#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    cout << "Enter the operator:";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << (a + b) << " ";
        break;
    case '-':
        cout << (a - b) << " ";
        break;
    case '*':
        cout << (a * b) << " ";
        break;
    case '/':
        cout << (a / b) << " ";
        break;
    default:
        cout << "please enter arithmetic operator:";
        break;
    }
    return 0;
}