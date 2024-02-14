#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"class a default constructor called\n";
    }
    A(int a)
    {
        cout<<"class A one argument constructor called\n";
    }
};
class B:public A{
    public:
    B()
    {
        cout<<"class B default constructor called\n";
    }
    B(int c)
    {
        cout<<"class B one argument constructor called\n";
    }
};
int main()
{
    B s(10);
    return 0;
}