#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[100];
    int c[300];
    int count=0,k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) 
        {
            c[k]=i;
            if(j!=i)
            {
             if(a[i]==a[j])
             {
                count=count+1;
                k++;
                c[k]=j;
             }
            }
        }
    }
    int min=c[0];
    for(int y=0;y<k;y++)
    {
        if(c[y]<min)
        {
            min=c[y];
        }
    }
    cout<<min;
    return 0;
}