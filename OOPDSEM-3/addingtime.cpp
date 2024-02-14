#include<iostream>
using namespace std;
class Time{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    Time(){}
    Time(int a,int b,int c)
    {
        hours=a;
        minutes=b;
        seconds=c;
    }
    void input()
    {
        cout<<"Enter the time:";
        cin>>hours>>minutes>>seconds;
    }
    void display()
    {
        cout<<"time is:";
        cout<<hours<<" "<<minutes<<" "<<seconds;
    }
    Time add(Time a,Time b)
    {
        Time c;
        c.hours=a.hours+b.hours;
        c.minutes=a.minutes+b.minutes;
        c.seconds=a.seconds+b.seconds;
        if(c.seconds>60)
        {
            c.seconds=c.seconds-60;
            c.minutes++;
        }
        if(c.minutes>60)
        {
            c.minutes=c.minutes-60;
            c.hours++;
        }
        return c;
    }
    //WHY THIS APPROACH DOES NOT WORK IN THIS CODE?//AA WRONG BATADE CHE COMPILER TIME ERROR
    // //another approach of this problem is
    // Time add(Time a,Time b)
    // {
    //     int c1,c2,c3;
    //     c1=a.hours+b.hours;
    //     c2=a.minutes+b.minutes;
    //     c3=a.seconds+b.seconds;
    //     return(c1,c2,c3);
    // }
};
int main()
{
    Time t1,t2;
    t1.input();
    t2.input();
    Time t3;
    t3=t1.add(t1,t2);
    t3.display();
    return 0;
}