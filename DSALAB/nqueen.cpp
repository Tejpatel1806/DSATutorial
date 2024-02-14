#include <iostream>
using namespace std;

void NQueen(int n, int a[], int q)
{
    if (q == n)
    {
        return;
    }
    for (int j = 0; j < n; j++)
    {
        int threat = false;
        for (int i = 0; i < n; i++)
        {
            if (j == a[i] || ((q - 1) == i && (j - 1) == a[i] || ((q - 1) == i && (j + 1) == a[i]))) //((q-1) == i && ((j-1) == a[i] || (j+1) == a[i])))
            {
                threat = true;
            }
        }
        if (threat == false)
        {
            a[q] = j;
            NQueen(n, a, q + 1);
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of queens : " << endl;
    cin >> n;

    int a[n];

    if (n == 1)
    {
        cout << "Q" << endl;
    }

    else if (n < 4)
    {
        cout << "No Solution" << endl;
    }

    else
    {
        NQueen(n, a, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == a[i])
                {
                    cout << "Q ";
                }
                else
                {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        // for(int i=0; i<n; i++)
        // {
        //     cout << a[i] << " ";
        // }
    }
    return 0;
}