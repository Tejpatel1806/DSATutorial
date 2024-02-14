#include<iostream>
using namespace std;
int main()
{
    int n;
    int b[100];
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            b[k]=sum;
            k++;
           // cout<<sum<<" ";
        }
    }
    int max=b[0];
    for(int i=0;i<k;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    cout<<max<<" ";
    return 0;

}