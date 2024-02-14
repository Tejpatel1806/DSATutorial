#include <iostream>
#include <math.h>
using namespace std;

void PrintAllSubsets(int arr[], int n)
{
    int snum = 0, x = pow(2, n), y = 0;
    cout << "{ ";
    while (snum < x)
    {
        cout << "{ ";
        for (int i = 0; i < n; ++i)
        {
            if ((snum & (1 << i)) != 0)
            {
                y++;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if ((snum & (1 << i)) != 0)
            {
                cout << arr[i];
                if (i < y - 1)
                {
                    cout << ", ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        y = 0;
        if (snum < x - 1)
        {

            cout << "}, ";
        }
        else
        {
            cout << "} ";
        }

        ++snum;
    }
    cout << " }";
}
void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter Array length :";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements :";
    input(arr, n);
    PrintAllSubsets(arr, n);
}