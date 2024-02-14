#include<iostream>
using namespace std;
class time{
    int hours;
    int minutes;
    int seconds;
    public:
    time()
    {
       hours=0;
       minutes=0;
       seconds=0;
    }
    time(int a,int b,int c)
    {
        hours=a;
        minutes=b;
        seconds=c;
    }
    void get()
    {
        cout<<"enter the time:";
        cin>>hours>>minutes>>seconds;
    }
    void display()
    {
        cout<<"this time is ";
        cout<<hours<<" "<<minutes<<" "<<seconds;
    }
    time operator +(time s)
    {
        int a=hours+s.hours;
        int b=minutes+s.minutes;
        int c=seconds+s.seconds;
        if(c>60)
        {
            c=c-60;
            b++;
        }
        if(b>60)
        {
            b=b-60;
            a++;
        }
        return time(a,b,c);
    }
};
int main()
{
    time a1,a2,a3;
    a1.get();
    a2.get();
    a3=a1+a2;
    a3.display();
    return 0;
}