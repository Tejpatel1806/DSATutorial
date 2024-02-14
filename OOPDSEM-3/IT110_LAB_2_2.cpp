#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    cout << "By a For loop \n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello\n";
    }

    cout << "By a While loop \n\n";
    int i = 1;
    while (i <= 5)
    {
        cout << "Hello\n";
        i++;
    }

    cout << "By a do-while loop \n\n";
    int j = 1;
    do
    {
        cout << "Hello\n";
        j++;
    } while (j <= 5);

    return 0;
}