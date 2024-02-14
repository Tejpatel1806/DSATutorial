#include<iostream>
using namespace std;
void fun(int v1,int &v2,int v3,int& v4)
{
    v1++;
    v2=v2+5;
    v3--;
    v4=v4-v3+v1;
}
int main()
{
    int a=1,b=2,c=3,d=4;
    fun(a,b,d,d);
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    return 0;
}
