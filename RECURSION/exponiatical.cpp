#include<iostream>
using namespace std;
int expo(int x,int m)
{
    if(m==0)
    {
        return 1;
    }
    if(m<0)
    {
        m=m*(-1);
        return 1/(expo(x,m-1)*x);
    }
    else
    {
      return expo(x,m-1)*x;
    }
}
int main()
{
    int x,m;
    cin>>x>>m;
    int p=expo(x,m);
    cout<<p<<endl;
    return 0;
}