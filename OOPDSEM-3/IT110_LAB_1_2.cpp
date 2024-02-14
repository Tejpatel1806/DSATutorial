#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter number"<<endl;
    cin>>n1>>n2;
    cout<<endl<<"1.sum"<<endl<<"2.multiplication"<<endl<<"3.division"<<endl<<"4.subtraction"<<endl;
    int opt;
    cin>>opt;
    if (opt==1)
    {
        cout<<n1+n2;
    }
    if (opt==2)
    {
        cout<<n1*n2;
    }
    if (opt==3)
    {
        cout<<n1/n2;
    }
    if (opt==4)
    {
        cout<<n1-n2;
    }

    return 0;
}