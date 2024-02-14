#include<iostream>
using namespace std;
class DIST1
{
    public:
    int metres;
    int centimetres;
    void getdata()
    {
        cout<<"ENTER THE DATA:";
        cin>>metres>>centimetres;
    }
};
class DIST2
{
    public:
    int feet;
    int inches;
    void getdata1()
    {
        cout<<"ENTER THE DATA:";
        cin>>feet>>inches;
    }
    void operator +(DIST1 f)
    {
      DIST2 b3;
      f.metres=(f.metres*3.28);
      f.centimetres=(f.centimetres*0.3937);
      b3.feet=f.metres+feet;
      b3.inches=f.centimetres+inches;
      cout<<"sum of this two object is: in feet and inches ";
      cout<<b3.feet<<" "<<b3.inches;
    }
};
int main()
{
    DIST1 d1;
    DIST2 d2;
    d1.getdata();
    d2.getdata1();
    d2+d1;
    return 0;
}
