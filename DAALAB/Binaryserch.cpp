#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int lower,int higher,int target)
{
    while(lower<higher)
    {
        int mid=lower+ (higher-lower)/2;
        if (a[mid] == target)
        {
            return mid;
        }
        if (a[mid] > target)
        {
            return binarysearch(a, lower, mid - 1, target);
        }
        return binarysearch(a, mid + 1, higher, target);
    }
    return -1;

}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ARRAY ELEMENT: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Element do you want to search: ";
    int target;
    cin>>target;
    int x=binarysearch(a,0,n-1,target);
    if(x==-1)
    {
        cout<<"ELEMENT NOT FOUND!!";
    }
    else
    {
        cout<<"THE POSITION OF YOUR ELEMENT IS: "<<x;
    }

}