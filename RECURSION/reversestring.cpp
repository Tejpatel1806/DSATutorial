#include<iostream>
using namespace std;
int reverser(string s,int n)
{
    if(s[n]=='\0')
    {
        return 0;
    }
    else
    {
        reverser(s,n+1);
        cout<<s[n];
        return 0;
    }
}
int main()
{
    string s;
    cin>>s;
    int x=0;
    reverser(s,x);
    return 0;
}