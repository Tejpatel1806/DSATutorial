#include<iostream>
using namespace std;
class time
{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    void getdata()
    {
        cout<<"enter the time:"<<endl;
        cin>>hours;
        cin>>minutes;
        cin>>seconds;
    }
    time add(time a1,time a2)
    {
        time a3;
        a3.hours=a1.hours+a2.hours;
        a3.minutes=a1.minutes+a2.minutes;
        a3.seconds=a1.seconds+a2.seconds;
        if(a3.seconds>60)
        {
            a3.seconds=a3.seconds-60;
            a3.minutes++;
        }
        if(a3.minutes>60)
        {
            a3.minutes=a3.minutes-60;
            a3.hours++;
        }
        return a3;
    }
    void printdata(time a4)
    {
   cout<<"time is "<<a4.hours<<":"<<a4.minutes<<":"<<a4.seconds<<endl;
    }
};
int main()
{
    time c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c3.add(c1,c2);
    c3.printdata(c3);
    return 0;
}