#include<iostream>
using namespace std;
int binarysearch(int b[],int size,int key)
{
    int s=0;
    int e=size;
    while(s<=size)
    {
        int mid=(s+e)/2;
        if(b[mid]==key)
        {
            return mid;
        }
        else if(b[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;

}

int main()
{
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int p=binarysearch(a,n,key);
    cout<<p;
    return 0;
}