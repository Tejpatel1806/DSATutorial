#include<iostream>
using namespace std;
class distance5 
{
    float feet;
    public:
    distance5()
    {
        feet=0;
    }
    distance5(float a)
    {
        feet=a;
    }
    void showdist()
    {
        cout<<"distance is "<<feet<<endl;
    }
    distance5 operator +(float s4)
    {
        float t=feet+s4;
        return distance5(t);      
    }
    distance5 operator +(distance5 sd)
    {
        int t=10+sd.feet;
        return distance5(t);      
    }
};
int main()
{
    distance5 d1=2.5;
    distance5 d2=1.25;
    distance5 d3;
    d3=d1+10.0;
    d3.showdist();
    //d3=10+d1;
   // d3.showdist();
    return 0;
}