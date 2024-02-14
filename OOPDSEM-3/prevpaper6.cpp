#include<iostream>
using namespace std;
class abc
{
    private:
    int serialnum;
    static int x;
    public:
    abc()
    {
        x++;
        cout<<"I AM ONJECT NUMBER"<<x<<endl;
    }
    void getdata()
    {
        cout<<"ENTER THE SERIAL NUMBER:";
        cin>>serialnum;
    }
    void display()
    {
        cout<<"MY SERIAL NUMBER IS:"<<serialnum<<endl;
    }
};
int abc::x;
int main()
{
    abc a;
    a.getdata();
    a.display();
    abc b;
    b.getdata();
    b.display();
    abc c;
    c.getdata();
    c.display();
    return 0;
}
