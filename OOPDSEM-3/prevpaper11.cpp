#include<iostream>
using namespace std;
class electricity{
    protected:
    int dataconsu;
    int charges=0;
    int asd;
    public:
    void getdata()
    {
       cout<<"enter the consumption data: ";
       cin>>dataconsu;
       asd=dataconsu;
    }
    void bill()
    {
        if(dataconsu<=100)
        {
            charges=charges+(dataconsu*50);
        }
        if(dataconsu>100 && dataconsu<=200)
        {
            dataconsu=dataconsu-100;
            charges=charges+(dataconsu*55)+5000;
        }
        if(dataconsu>200)
        {
            dataconsu=dataconsu-200;
            charges=charges+(dataconsu*60)+5500+5000;
        }
    }
};
class more_efficiency:public electricity
{
     public:
     void bill()
     {
         electricity::bill();
         if(charges>=250)
         {
             charges=((15*charges)/100);
         }
     }
     void display()
     {
         cout<<"the data consumption is "<<"  "<<asd<<" and charge is "<<charges<<endl;
     }
};
int main()
{
    more_efficiency e1;
    e1.getdata();
    e1.bill();
    e1.display();
    return 0;
}
    