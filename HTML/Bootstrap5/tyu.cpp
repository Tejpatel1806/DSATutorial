#include <bits/stdc++.h>
using namespace std;
// Codchef not giving answer
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;
        int flag=0;

        for (long long int i = 2; i< n; i++)
        {
            if (n % i == 0)
            {
                //cout << "no" << endl;
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"no";
        }
        else{
            cout<<"yes";
        }
    }
    return 0;
}