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
    for(int i=0;i<n1;i++)
    {
        for(int j=i+1;j<n1;j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr1[j]=0;
            }
        }
    }
    for(int h=0;h<n1;h++)
    {
        if(arr1[h]!=0)
        {
        arr3[k]=arr1[h];
        k++;
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr2[j]=0;
            }
        }
    }
    for(int g=0;g<n2;g++)
    {
        if(arr2[g]!=0)
        {
            arr3[k]=arr2[g];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }
}