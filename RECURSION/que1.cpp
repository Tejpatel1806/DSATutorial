#include<iostream>
using namespace std;
int head(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<" ";
    head(n-1);
}
int tail(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    tail(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    head(n);
    cout<<endl;
    tail(n);
    return 0;
}