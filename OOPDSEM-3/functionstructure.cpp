#include<iostream>
using namespace std;
struct time{
    int hours;
    int minutes;
    int sec;
};
time sum(time t1,time t2)
{
    time t3;
    t3.hours=t1.hours+t2.hours;
    t3.minutes=t1.minutes+t2.minutes;
    t3.sec=t1.sec+t2.sec;
    if(t3.hours>24)
    {
        int x=t3.hours-24;
        t3.hours=24;
        t3.minutes=(t3.minutes+(x*60));
    }
    if(t3.minutes>60)
    {
        int y=t3.minutes-60;
        t3.minutes=60;
        t3.sec=((t3.sec)+(y*60));
    }
    return t3;
}
int main()
{
    time t1,t2,t4;
    cout<<"Enter the first time:";
    cin>>t1.hours>>t1.minutes>>t1.sec;
    cout<<"Enter the second time:";
    cin>>t2.hours>>t2.minutes>>t2.sec;
    t4=sum(t1,t2);
    cout<<t4.hours<<" "<<t4.minutes<<" "<<t4.sec;
    return 0;
}