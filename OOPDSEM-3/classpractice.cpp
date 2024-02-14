#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    int sec;
    public:
    time()
    {
        hours=0;
        minutes=0;
        sec=0;
    }
    void initialize(int a,int b,int c)
    {
        hours=a;
        minutes=b;
        sec=c;
    }
    void display()
    {
        cout<<hours<<":"<<minutes<<":"<<sec;
    }
    void add(time t1,time t2)
    {
        hours=t1.hours+t2.hours;
        minutes=t1.minutes+t2.minutes;
        sec=t1.sec+t2.sec;
    }
};
int main()
{
    time t1,t2,t3;
    t1.initialize(10,12,30);
    t2.initialize(12,41,20);
    t3.add(t1,t2);
    t3.display();
    return 0;
}
