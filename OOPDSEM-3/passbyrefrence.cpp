#include<iostream>
using namespace std;
void set(int &a,int &b)
{
    if(a>b)
    {
        b=0;
    }
    else
    {
        a=0;
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;
    set(x,y);
    cout<<x<<" "<<y;
    return 0;
}