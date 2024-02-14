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
        cout<<"Enter the value of distance: ";
        cin>>feet>>inches;
    }
    void putdata()
    {
        cout<<"The value of this distance is: ";
        cout<<"feet: "<<feet<<" "<<"inches: "<<inches<<endl;
    }
    friend void compare(distance1 &d1,distance1 &d2);
};
void compare(distance1 &d1,distance1 &d2)
{
    int f=((d1.feet)*12)+d1.inches;
    int d=((d2.feet)*12)+d2.inches;
    if(f>d)
    {
        cout<<"DISTANCE 1 IS LARGER: "<<endl;
    }
    else if(d>f)
    {
        cout<<"DISTANCE 2 IS LARGER: "<<endl;
    }
    else
    {
        cout<<"BOTH ARE EQUAL: "<<endl;
    }
} 
int main()
{
    distance1 d;
    distance1 k;
    d.getdata();
    k.getdata();
    compare(d,k);
    return 0;
}