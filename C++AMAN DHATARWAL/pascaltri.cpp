#include<iostream>
using namespace std;
int fact(int a)
{
    int factorial=1;
    for(int i=2;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n,s;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}