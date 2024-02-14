#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=1,tem;
    while(x<n)
    {
        for(int i=0;i<n-x;i++)
        {
          if(a[i]>a[i+1])
         {
           tem=a[i];
           a[i]=a[i+1];
           a[i+1]=tem;
         } 
        }
      x++; 
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}