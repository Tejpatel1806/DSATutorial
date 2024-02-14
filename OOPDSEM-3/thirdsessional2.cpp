#include<iostream>
using namespace std;
class distance1
{
    private:
    int feet;
    int inches;
    public:
    void getdata()
    {
        cout<<"enter the value of feet and inches: ";
        cin>>feet>>inches;
    }
    void printdata()
    {
        cout<<"the value of feet and inches: ";
        cout<<feet<<" "<<inches;
    }
    friend distance1 operator+=(distance1 d1,distance1 d2);
};
distance1 operator += (distance1 d1,distance1 d2)
{
    distance1 f4;
    
    f4.feet=d1.feet+d2.feet;
    f4.inches=d1.inches+d2.inches;
    return f4;
}
int main()
{
   distance1 d1,d2,d3;
   d1.getdata();
   d2.getdata();
   d3=d1+=d2;
   d3.printdata();
   return 0;
}