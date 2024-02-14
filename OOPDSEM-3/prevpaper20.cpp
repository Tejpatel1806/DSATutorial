#include<iostream>
using namespace std;
//program accroding to 1dollar=50rupees
class rupee
{
    public:
    int rupees;
    rupee(){}
    rupee(int s)
    {
        rupees=s;
    }
    void read()
    {
        cout<<"ENTER THE RUPEES: ";
        cin>>rupees;
    }
    void display()
    {
        cout<<"THE RUPEES IS: ";
        cout<<rupees<<endl;
    }
};
class doller1
{
    private:
    int doller;
    public:
    doller1(){}
    doller1(rupee r)
    {
        doller=(r.rupees/50);
    }
    operator rupee()
    {
        return rupee(doller*50);
    }
    void read()
    {
        cout<<"ENTER THE DOLLER: ";
        cin>>doller;
    }
    void display()
    {
        cout<<"THE DOLLER IS: ";
        cout<<doller<<endl;
    }
};
int main()
{
    rupee r1,r2;
    doller1 d1,d2;
    r1.read();
    d1=r1;
    d2.read();
    r2=d2;
    d1.display();
    r2.display();
    return 0;
}
// void add(DIST1 d1,DIST2 d2)
// {
//     DIST2 b3;
//     d1.metres=(d1.metres*3.28);
//     d1.centimetres=(d1.centimetres*0.3937);
//     b3.feet=d1.metres+d2.feet;
//     b3.inches=d1.centimetres+d2.inches;
//     cout<<"sum of this two object is:";
//     cout<<b3.feet<<" "<<b3.inches;   
// }
// add(d1,d2);