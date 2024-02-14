#include<iostream>
using namespace std;
int main()
{
int m,n,i,j;
cin>>m>>n;
int a[m],b[n];
for(i=0;i<m;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
cin>>b[i];
}
int z;
z=m+n;
int arr[100];
for(i=0;i<m;i++)
{
arr[i]=a[i];
}
for(i=m;i<z;i++)
{
arr[i]=b[i-m];
}
for(int l=0;l<z;l++)
{
    for(int u=l+1;u<z;u++)
    {
        if(arr[l]==arr[u])
        {
            arr[u]=0;
        }
    }
}
for(int i=0;i<z;i++)
{
    if(arr[i]!=0)
    {
        cout<<arr[i]<<" ";
    }
}
return 0;
}