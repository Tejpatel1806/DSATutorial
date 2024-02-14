#include<iostream>
using namespace std;
 void convert( int arr[],int n)
 {
     for(int i=0;i<5;i++)
     {
         *(arr+i)=((*(arr+i)-32)/1.8);
     }
 }
int main()
{
    int arr[5]={45,200,300,400,50};
    convert(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}