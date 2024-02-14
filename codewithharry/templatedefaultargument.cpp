#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class tej
{
    public:
    T1 a;
    T2 b;
    T3 c;
    tej(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main()
{
    tej<> abc(45,41.02,'k');
    abc.display();
    cout<<endl;
    tej<char,int,char> y('l',4,'p');
    y.display();
    return 0;
}