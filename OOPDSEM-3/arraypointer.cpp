#include<iostream>
using namespace std;
int *add(int *ptr1,int *ptr2,int *ptr3,int n)
{
     for(int i=0;i<n;i++)
     {
         *(ptr3+i)=(*(ptr1+i))+(*(ptr2+i));
     }
     return ptr3;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    int *ptr5=add(a,b,c,n);
    for(int j=0;j<n;j++)
    {
        cout<<*(ptr5+j)<<" ";
    }
    return 0;
}