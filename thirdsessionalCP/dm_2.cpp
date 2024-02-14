#include<iostream>
using namespace std;
int main()
{
    int arr1[8]={1,1,3,3,4,5,5,7};
    int arr2[5]={2,3,3,5,6};
    int c[10];
    int n3=0;
     for( int i=0;i<8;i++)
     {
           for( int j=0;j<5;j++)
          {
                 if(arr1[i]==arr2[j] && arr1[i]!=0 && arr2[j]!=0)
               {
                c[n3]=arr1[i];
                n3+=1;
                arr1[i]=arr2[j]=0;
               }
         } 
     }
    for(int i=0;i<n3;i++)
    {
        cout<<c[i]<<" ";
    }
return 0;
}
