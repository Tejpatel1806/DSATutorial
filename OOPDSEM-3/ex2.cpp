#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"hi";}
    A(int a){cout<<"hello";}
};
class B:public A
{
    public:
    B():A(){cout<<"hi1";}
    B(int a1):A(a1){cout<<"hello1";}
};
int main()
{
    B s;
    B b(5);
    return 0;
}