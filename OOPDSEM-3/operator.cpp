#include<iostream>
using namespace std;
class operatoe1
{
    private:
    int a;
    public:
    operatoe1( )
    {
        a=0;
    }
    operatoe1(int a1)
    {
        a=a1;
    }
    void getdata()
    {
        cout<<"Enter the value:";
        cin>>a;
    }
    void display()
    {
        cout<<"the value is : ";
        cout<<a<<endl;
    }
    operatoe1 operator +(operatoe1 s)
    {
        a=a+s.a;
        return operatoe1(a);
    }
    operatoe1 operator -(operatoe1 s)
    {
        a=a-s.a;
        return operatoe1(a);
    }
    operatoe1 operator *(operatoe1 s)
    {
        a=a*s.a;
        return operatoe1(a);
    }

};
int main()
{
    operatoe1 a4;
    a4.getdata();
    a4.display();
    operatoe1 b4;
    b4.getdata();
    b4.display();
    operatoe1 as,as1,as2;
    as=a4+b4;
    as.display();
    as1=a4-b4;
    as1.display();
    as2=a4*b4;
    as2.display();
    return 0;
}