#include <iostream>

using namespace std;
void intersection(int n, int m, int a[], int b[])
{
    int temp, w[100], g = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                w[g] = a[i];
                g++;
            }
        }
    }

    cout << "Intersection of 2 sets is" << endl;

    for (int i = 0; i < g; i++)
    {
        if (w[i] != w[i + 1])
            cout << w[i] << " ";//print the intersection array
    }
}

int main()
{
    int a[100], b[100];

    int n, m;

    cout << "ENTER NUMBER OF ELEMENTS IN A AND B RESPECTIVELY" << endl;
    cin >> n >> m;//scan the size of set A and B 
    cout << "Enter Elements of set A" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];//scan the element of Set A
    }
    cout << "Enter Elements of set B" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];//scan the element of Set B 
    }
    intersection(n, m, a, b);//function call
}