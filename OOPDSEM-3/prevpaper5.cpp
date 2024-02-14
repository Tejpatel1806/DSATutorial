#include<iostream>
using namespace std;
struct time_taken
{
    int hours;
    int minutes;
};
struct another
{
    time_taken laptop;
    time_taken desktop;
};
int main()
{
    another b;
    b.laptop.hours=15;
    b.laptop.minutes=40;
    b.desktop.hours=20;
    b.desktop.minutes=25;
    time_taken x;
    x.hours=b.laptop.hours+b.desktop.hours;
    x.minutes=b.laptop.minutes+b.desktop.minutes;
    if(x.minutes>60)
    {
        x.minutes=x.minutes-60;
        x.hours++;
    }
    cout<<"The total time is:"<<endl;
    cout<<x.hours<<" "<<x.minutes;
    return 0;
}