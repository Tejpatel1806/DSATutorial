//Aim:-  Find the Shortest Path using Diskstra's Algorithm...
#include <iostream>
using namespace std;
class dikshtra
{
    int n;
    int a[][3];

public:
    dikshtra()
    {
        cout << "Enter the total no. of nodes : ";
        cin >> n;
    }
    void getdata()
    {
        cout << "Enter the distances " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void shortest_path()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (a[i][j] + a[j][k] < a[i][k])
                    {
                        a[i][k] = a[i][j] + a[j][k];
                    }
                }
            }
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    dikshtra d;
    d.getdata();
    cout << "\nThe Actual path is " << endl;
    d.display();
    d.shortest_path();
    cout << "\nThe Shortest path is " << endl;
    d.display();
    return 0;
}