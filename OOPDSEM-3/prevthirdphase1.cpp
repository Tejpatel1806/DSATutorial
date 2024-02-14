#include<iostream>
using namespace std;
class complex1
{
   private:
   int x,y;
   public:
   void getdata()
   {
       cout<<"ENTER THE VALUE OF X AND Y: ";
       cin>>x>>y;
   }
   void printdata()
   {
       cout<<"THE VALUE OF X AND Y IS: "<<x<<" "<<y<<endl;
   }
   friend complex1 operator +(complex1 a1,complex1 a2);
};
complex1 operator +(complex1 a1,complex1 a2)
{
     complex1 k;
     k.x=a1.x+a2.x;
     k.y=a1.y+a2.y;
     return k;
}
int main()
{
    complex1 c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.printdata();
    return 0;
}