#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Given Number is Prime Number";
    }
    else{
        cout<<"Given Number is Composite";
    }
    return 0;
}