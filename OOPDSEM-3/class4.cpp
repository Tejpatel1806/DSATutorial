#include<iostream>
using namespace std;
class room
{
    struct distance
    {
        float inches;
        float feets;
    };
    distance length;
    distance width;
    float area;
    float area1;
    public:
    void getdata()
    {
        cin>>length.inches>>length.feets;
        cin>>width.inches>>width.feets;
    }
    void area5()
    {
        float area=(length.inches*width.inches);
        float area1=(length.feets*width.feets);
    }
    void display()
    {
        cout<<length.inches<<" "<<length.feets<<endl;
        cout<<width.inches<<" "<<width.feets<<endl;
         cout<<"area is"<<area<<"inches"<<area1<<"feets";
    }
};
int main()
{
    room m;
    m.getdata();
    m.area5();
    m.display();
    return 0;
}