#include<iostream>
using namespace std;
class distance1
{
    private:
    int inches;
    int feet;
    public:
    void getdata()
    {
        cout<<"Enter the value in feet and inches:";
        cin>>inches>>feet;
    }
    void display()
    {
        cout<<inches<<" "<<feet;
    }
    distance1 operator - (distance1 d)
    {
        distance1 temp;
        temp.inches=inches+d.inches;
        temp.feet=feet+d.feet;
        return temp;
    }
};
int main()
{
    distance1 d1,d2,d4;
    d1.getdata();
    d2.getdata();
    d4=d1-d2;
    d4.display();
    return 0;
}