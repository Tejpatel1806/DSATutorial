#include<iostream>
using namespace std;
void search(int arr[],int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element is found";
            count=1;
        }
    }
    if(count==0)
    {
        cout<<"element not found";
    }
}
void average(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int x=sum/n;
    cout<<"the average is:"<<" "<<x<<endl;
}
void largest(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"maximum element is: "<<max<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the array element:";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter the element do you want to search:";
    int x;
    search(a,n,x);
    largest(a,n);
     average(a,n);
     return 0;
}