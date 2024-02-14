#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<b;
    }
    else{
        cout<<c;
    }

return 0;
}