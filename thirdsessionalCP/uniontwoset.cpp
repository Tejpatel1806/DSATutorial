#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter size Of Array 1:";
    cin>>n1;
    cout<<"Enter The element of array:";
    int arr1[10];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter size Of Array 2:";
    cin>>n2;
    cout<<"Enter The element of array:";
    int arr2[10];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int arr3[20];
    int k=0;
    for(int j=0;j<n1;j++)
    {
        arr3[k]=arr1[j];
        k++;
    }
    int count=1;
    for(int i=0;i<n2;i++)
    {
        count=1;
        for(int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                count=0;
                break;
            }
        }
        if(count==1)
        {
        arr3[k]=arr2[i];
        k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(arr3[i]==arr3[j])
            {
                arr3[j]=0;
            }
        }
    }
    for(int j=0;j<k;j++)
    {
        if(arr3[j]!=0)
        {
        cout<<arr3[j]<<" ";
        }
    }
    return 0;
}