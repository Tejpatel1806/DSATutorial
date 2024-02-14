#include<iostream>
using namespace std;
void differenceset(int n1,int n2,int a[],int b[])//function defination
{
    int count;
    int arr[100];
    int f=0;
    for(int i=0;i<n1;i++)
    {
        count=0;
        for(int j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                 count=1;//compare the array a to array b and element whose not same in both that store into the arr array
            }
        }
        if(count==0)
        {
            arr[f]=a[i];
            f++;  
        }
    }
    cout<<"The difference of two set is(A-B): {";
    for(int i=0;i<f;i++)
    {
        cout<<arr[i]<<",";//print the difference set array
    }
    cout<<"}";
}
void differenceset1(int n1,int n2,int a[],int b[])
{
    int count;
    int arr[100];
    int f=0;
    for(int i=0;i<n2;i++)
    {
        count=0;
        for(int j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                 count=1;//compare the array b to array a and element whose not same in both that store into the arr array
            }
        }
        if(count==0)
        {
            arr[f]=b[i];
            f++;  
        }
    }
    cout<<"The difference of two set is(B-A): {";
    for(int i=0;i<f;i++)
    {
        cout<<arr[i]<<",";//print the difference set array
    }
    cout<<"}";
}
int main()
{
    int n1;
    cout<<"Enter the size of set A:";
    cin>>n1;
    cout<<"Enter the element of set A:";
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];//scan the element of array A
    }
    int n2;
    cout<<"Enter the size of set B:";
    cin>>n2;
    cout<<"Enter the element of set B:";
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];//scan the element of array B
    }
    int p;
    cout<<"Enter 1 for (A-B) AND 2 FOR (B-A):";
    cin>>p;
    if(p==1)
    {
    differenceset(n1,n2,a,b);//function call
    }
    if(p==2)
    {
        differenceset1(n1,n2,a,b);//function call
    }

    return 0;
}
