#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p1;
    vector<vector<int>> v;
    vector<int> temp;
    int n;
    cin >> n;
    for (int g = 0; g < n; g++)
    {
        temp.clear();
        for (int i = 0; i < 2; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    int i4;
    int k;
    for (i4 = 0; i4 < v.size();)
    {
        int count = 0;
        for (k = i4 + 1; k < v.size(); k++)
        {
            if (v[i4][1] >= v[k][0])
            {
                count = 1;
                v[i4][1]=v[k][1];
                p1 = v[k][1];
            }
            else
            {
                break;
            }
        }
        if (count == 0)
        {
            cout << v[i4][0];
            cout << v[i4][1];
            cout << " ";
        }
        else if (count != 0)
        {
            cout << v[i4][0];
            cout << p1;
            cout << " ";
        }
        i4 = k;
    }
}