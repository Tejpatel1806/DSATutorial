#include<iostream>
using namespace std;
class Emplyoee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1)
    { 
        a=a1;
        b=b1;
        c=c1;
    }
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
int main()
{
  Emplyoee tej;
  tej.d=78;
  tej.e=74;
  tej.setdata(45,41,46);
  tej.getdata();
  return 0;
}