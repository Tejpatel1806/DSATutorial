#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        int count = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                count++;
            }
        } 
        v.push_back(count);
    }
    sort(v.begin(), v.end());
label:
    for (int j = v.size() - 1; j >= 0&&k != 0; j--)
    {
        if (v[j] < v[0])
        {
            if (k > v[0] - v[j])
            {
                k = k - (v[0] - v[j]);
                v[0] = v[j];
            }
            else
            {
                v[0] = v[0] - k;
                k = 0;
                goto tej;
            }
        }
        else if (v[j] > v[0])
        {
            cout<<"hello";
            if (k > v[j] - v[0])
            {
                k = k - (v[j] - v[0]);
                v[j] = v[0];
            }
            else
            {
                v[j] = v[j] - k;
                k = 0;
                cout<<v[j]<<" ";
                goto tej;
            }
        }
        else if (v[j] == v[0])
        {
            v[j] = v[j] - 1;
            k--;
        }
    }
tej:
    cout << v[0] << v[1] << v[2];
    int sum = 0;

    if (k != 0)
    {
        goto label;
    }
    else
    {
        for (int j = 0; j < v.size(); j++)
        {
            sum = sum + (v[j] * v[j]);
        }
        cout << sum << endl;
    }
    return 0;
}