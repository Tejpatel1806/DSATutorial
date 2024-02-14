#include<iostream>
using namespace std;
int sumofn(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sumofn(n-1)+n;
    }
}
int main()
{
    int s;
    cin>>s;
    int p=sumofn(s);
    cout<<p;
    return 0;
}