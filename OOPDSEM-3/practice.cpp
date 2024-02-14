#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int p = v[0];
    int odd[10];
    int even[10];
    int p1 = 0, p2 = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            even[p1] = v[i];
            p1++;
        }
        else
        {
            odd[p2] = v[i];
            p2++;
        }
    }
    sort(odd, odd + p2);
    sort(even, even + p1);
    int array[100] = {0};
    array[0] = p;
    if (p % 2 == 0)
    {
        int j1 = 1;
        int j2 = 2;
        int r1;
        for (r1 = 0; r1 < p2; r1++)
        {
            if (j1 < t)
            {
                array[j1] = odd[r1];
                j1 = j1 + 2;
            }
            else
            {
                break;
            }
        }
        cout << "p2 is" << p2 << endl;
        cout << r1 << endl;
        int r2;
        for (r2 = 0; r2 < p1; r2++)
        {
            if (j2 < t)
            {
                array[j2] = even[r2];
                j2 = j2 + 2;
            }
            else
            {
                break;
            }
        }
        cout << "p1 is:" << p1 << endl;
        cout << r2 << endl;
        if (r2 < p1)
        {
            for (int i = 0; i < t; i++)
            {
                if (array[i] == 0)
                {
                    array[i] = even[r2];
                    r2++;
                }
            }
        }
        if (r1 < p2)
        {
            for (int i = 0; i < t; i++)
            {
                if (array[i] == 0)
                {
                    array[i] = odd[r1];
                    r1++;
                }
            }
        }
        for (int i = 0; i < t; i++)
        {
            cout << array[i] << " ";
        }
    }
    
    return 0;
}