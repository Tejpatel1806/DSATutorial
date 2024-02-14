#include<iostream>
using namespace std;
class distance5
{
    private:
    int feets;
    int inches;
    public:
    void getdata()
    {
        cout<<"enter the value of dist:";
        cin>>feets>>inches;
    }
    void printdata()
    {
        cout<<feets<<"  "<<inches;
    }
    distance5 operator +=(distance5 d1)
    {
        distance5 temp;
        temp.feets=feets+d1.feets;
        temp.inches=inches+d1.inches;
        return temp;
    }
};
int main()
{
    distance5 d,d2,d7;
    d.getdata();
    d2.getdata();
    d7=d+=d2;
    d7.printdata();
    return 0;
}