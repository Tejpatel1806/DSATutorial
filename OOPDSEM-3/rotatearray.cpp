#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N;
    cin>>N;
    for(int j=0;j<N;j++)
    {
        int first=a[0];
        int i;
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=first;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}