#include<iostream>
using namespace std;
class distance1
{
    int feet;
    int inches;
    public:
    void input()
    {
        cout<<"enter the value of distance:";
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<inches<<" "<<feet<<endl;
    }
    void subtract(distance1& d1,distance1& d2)
    {
        inches=d1.inches-d2.inches;
        feet=d1.feet-d2.feet;
        if(inches<0)
        {
            inches=inches*(-1);
        }
        if(feet<0)
        {
            feet=feet*(-1);
        }
    }
    void compare(distance1& d3,distance1& d4)
    {
        d3.inches=(d3.feet*12)+d3.inches;
         d4.inches=(d4.feet*12)+d4.inches;
         if(d3.inches==d4.inches)
         {
             cout<<"BOTH ARE EQUAL";
         }
          else if(d3.inches>d4.inches)
         {
             cout<<"DISTANCE-1 ARE LARGER";
         }
         else 
         {
             cout<<"DISTANCE-2 ARE LARGER";
         }  
    }
};
int main()
{
    distance1 d1,d2,d3;
    d1.input();
    d2.input();
    d3.subtract(d1,d2);
    d3.display();
    d3.compare(d1,d2);
    return 0;
}
