#include<iostream>
using namespace std;
int funa(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    else
    {
        return funa(funa(n+11));
    }
}
int main()
{
    int r;
    r=funa(99);
    cout<<r<<endl;
    return 0;
}