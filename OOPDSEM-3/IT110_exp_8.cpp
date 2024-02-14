#include <bits/stdc++.h>
using namespace std;
int count5=0;
void permute(string a, int l, int r)
{
    if (l == r)
    {
        cout<<a<<endl;
        count5++;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}
int main()
{
    string str ;
    cin>>str;
    int n = str.size();
    permute(str, 0, n - 1);
    cout<<count5;
    return 0;
}