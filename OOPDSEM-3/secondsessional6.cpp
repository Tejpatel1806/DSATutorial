#include<iostream>
using namespace std;
class centimeters
{
    public:
    int cm;
    centimeters(){}
    centimeters(int s)
    {
        cm=s;
    }
    void getdata()
    {
        cout<<"enter the data:";
        cin>>cm;
    }
    void printdata()
    {
        cout<<"the value in cm is:";
        cout<<cm;
    }
};
class meters
{
    private:
    int m;
    public:
    meters(){}
    meters(int p){m=p;}
    meters(centimeters a)
    {
        m=((a.cm)/100);
    }
    void getdata1()
    {
        cout<<"enter the data:";
        cin>>m;
    }
    void printdata1()
    {
        cout<<"the value in cm is:";
        cout<<m;
    }
    operator centimeters()
    {
        return centimeters(m*100);
    }
};
int main()
{
    centimeters c1,c2;
    meters m1,m2;
    c1=m2;
    m2=c2;
    return 0;
}
