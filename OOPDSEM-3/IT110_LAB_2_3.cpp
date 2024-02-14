#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    int a, b, quotient, remainder;
line:
    cout << "Enetr The Value Of Dividend(a) And Divisor(b) Respectively:\n";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "You Entered A Unasppected Value Of Divisor(b)\n\nAgain ";
        goto line;
    }
    else
    {
        quotient = a / b;
        remainder = a % b;
        cout << "quotient = " << quotient;
        cout << "\nremainder = " << remainder;
    }
    return 0;
}
