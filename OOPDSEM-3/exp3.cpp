#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        a=10;
    }
    void show()
    {
        cout<<a;
    }
};
class B
{
    public:
    int b;
    B()
    {
        b=20;
    }
    operator A ()
    {
        return A(b);
    }
};
int main()
{
    
}