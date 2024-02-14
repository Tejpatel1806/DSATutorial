#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    virtual void display()
    {
        a=25;
        cout<<"the valur of a is "<<a<<endl;
    }
};
class xyz : public abc{
    int p;
    void display()
    {
        p=78;
        cout<<"the value of p is "<<p<<endl;
    }
};
int main()
{
    abc c1;
    xyz c2;
    abc *ptr;
    ptr=&c2;
   (*ptr).display();
   return 0;
}