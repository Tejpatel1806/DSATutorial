#include<iostream>
using namespace std;
class distance
{
    int feet;
    float inches;
    public:
    void display()
    {
       cout<<"feet:-"<<feet<<"  "<<"inches"<<inches;
    }
    void insert()
    {
        cout<<endl<<"Enter feet and inches"<<endl;
        cin>>feet>>inches;
        while (inches>=12)
        {
            inches-=12;
            feet++;
        }
        
    }
    void compare(distance &b)
    {
       if (feet>b.feet)
       {
           cout<<endl<<"First length is greter then second"<<endl;
       }
       else
       {
           cout<<endl<<"second length is greter then first"<<endl;
       }
    }
    void subtract(distance &a,distance &b)
    {
        feet=a.feet-b.feet;
        inches=a.inches-b.inches;
    }

}d1,d2,d3;
int main()
{
    
    d1.insert();
    d1.display();
    d2.insert();
    d2.display();
    d1.compare(d2);
    d3.subtract(d1,d2);
    d3.display();
    return 0;
}
