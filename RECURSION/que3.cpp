#include<iostream>
using namespace std;
bool sorted(int arr[],int n,int r)
{
    if(arr[n-1]>arr[n])
    {
        return false;
    }
    if(n==r)
    {
        return true;
    }
    sorted(arr,n+1,r);
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    if(sorted(arr1,1,4))
    {
       cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
    return 0;
}