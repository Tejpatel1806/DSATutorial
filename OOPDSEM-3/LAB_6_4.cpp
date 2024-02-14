#include <iostream>
#include <math.h>
using namespace std;

class Polar
{
    protected:
    double radius;
    double angle;

    public:
    Polar(double a,double b)
    {
        radius = a;
        angle = b;
    }
};

class Rec
{
    private:
    double xco;
    double yco;

    public:
    void conversion(double a,double b)
    {
        xco = a * cos(b*3.14/180);
        yco = a * sin(b*3.14/180);
    }
    void print()
    {
        cout<<"X-coordinate: "<<xco<<"\nY-coordinate: "<<yco<<endl;
    }

};

int main()
{
    double rad,ang;
    cout<<"Enter the values of radius and angle(in degree): ";
    cin>>rad>>ang;
    Polar a(rad,ang);
    Rec b;
    b.conversion(rad,ang);
    b.print();
    return 0;
}