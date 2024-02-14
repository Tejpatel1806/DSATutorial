#include <iostream>
using namespace std;
void reverse(string &s, int i, int j)
{
    if ((j - i) % 2 == 0)
    {
        int p = j;
        char c;
        for (int k = i; k < (j - i) / 2; k++)
        {
            c = s[k];
            s[k] = s[p];
            s[p] = c;
            p--;
        }
    }
    else if ((j - i) % 2 != 0)
    {
        int p = j;
        char c;
        for (int k = i; k < ((j - i) / 2) + 1; k++)
        {
            c = s[k];
            s[k] = s[p];
            s[p] = c;
            p--;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        for (int l = k - 1; l != 0; l--)
        {
            reverse(s, 0, l);
        }
        cout << s << endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            else if(s[i]=='0')
            {
                count1++;
            }
        }
        if(count>count1 && count1!=0)
        {
            cout<<(count1-1)<<endl;
        }
        else if(count<count1 && count!=0)
        {
            cout<<(count-1)<<endl;
        }
        else if(count==count1 && count!=0)
        {
            cout<<(count-1)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        return 0;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        int sum=a+b;
        if(sum==c)
        {
            cout<<"EQUAL"<<endl;
        }
        else if(sum>c)
        {
            cout<<"TRAIN"<<endl;
        }
        else if(sum<c)
        {
            cout<<"PLANEBUS"<<endl;
        }
    }
    return 0;
}