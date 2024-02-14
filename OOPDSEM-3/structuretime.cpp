#include<iostream>
using namespace std;
struct time{
    int hours;
    int minutes;
    int sec;
};
int main()
{
    time t1,t2;
    cout<<"Enter the first time:";
    cin>>t1.hours>>t1.minutes>>t1.sec;
    cout<<"Enter the second time:";
    cin>>t2.hours>>t2.minutes>>t2.sec;
    int sum=(t1.hours*3600)+(t1.minutes*60)+t1.sec;
    int sum1=(t2.hours*3600)+(t2.minutes*60)+t2.sec;
    int sum2=sum+sum1;
    cout<<"total sec is"<<sum2<<endl;
    time t3;
    t3.hours=(sum2/3600);
    int p=sum2%3600;
    t3.minutes=p/60;
    t3.sec=p%60;
    cout<<"total time is: ";
    cout<<t3.hours<<" "<<t3.minutes<<" "<<t3.sec;
    return 0;
}