#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={7,5,5,3,1};
    int arr2[5]={6,3,3,5,2};
    int arr3[8];
    int k=0;
    for(int j=0;j<5;j++)
    {
    for(int i=0;i<5;i++)
    {
        if(arr1[j]==arr2[i])
        {
            arr3[k]=arr1[j];
            k++;
        }
    }
    }
    cout<<"The intersection of the two set is"<<endl;
    for(int p=0;p<k;p++)
    {
        for(int f=p+1;f<k;f++)
        {
            if(arr3[p]==arr3[f])
            {
                arr3[f]=0;
            }
        }
    }
    for(int l=0;l<k;l++)
    {
        if(arr3[l]!=0)
        {
        cout<<arr3[l]<<" ";
        }
    }
    return 0;
}