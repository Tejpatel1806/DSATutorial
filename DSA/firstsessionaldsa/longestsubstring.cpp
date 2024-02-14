#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // cout << s1.length() << " " << s2.length() << " ";
    vector<int> v;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                int count = 1;
                int k = j + 1;
                int p = i + 1;
                while (p != s1.length())
                {
                    if (s1[p] == s2[k])
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    k++, p++;
                }
                v.push_back(count);
            }
        }
    }
    if(v.empty())
    {
        cout<<"0"<<endl;
    }
    else
    {
    sort(v.begin(), v.end());
    cout << v[v.size() - 1] << endl;
    }
    return 0;
}