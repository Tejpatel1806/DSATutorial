#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the number do you want to find factorial:";
    cin>>t;
    int sum=1;
    for(int i=1;i<=t;i++)
    {
        sum=sum*(i);
    }
    cout<<sum;
    return 0;
}