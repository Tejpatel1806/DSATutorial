#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cout<<"enter the number"<<endl;
    cin>>a;
    int s=a;
    while(a>0)
    {
        b=a%10;
        c=b*b*b;
        sum=sum+c;
        a=a/10;    
    }
    if(sum==s)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}