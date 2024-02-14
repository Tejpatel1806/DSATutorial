#include<iostream>
using namespace std;
class shape
{
    protected:
    int length;
    public:
    virtual void read(){};
    virtual void area(){};
};
class square:public shape
{ 
    void read()
    {
        cout<<"Enter the length of square: ";
        cin>>length;
    }
    void area()
    {
        cout<<"area of the square is: ";
        cout<<(length*length)<<endl;
    }
};
class circle: public shape
{
  private:
  int radius;
  public:
  void read()
  {
      cout<<"enter the radius of circle: ";
      cin>>radius;
  }
  void area()
  {
      cout<<"area of the circle is: ";
      cout<<((3.14*radius*radius))<<endl;
  }
};
int main()
{
    shape *ptr;
    int n1,n2;

    square s[5];
    circle c[5];
    cout<<"Enter number of square object: ";
    cin>>n1;
    cout<<"enter the number of circle objects: ";
    cin>>n2;
    ptr=c;
    for(int i=0;i<n1;i++)
    {
    ptr->read();
    ptr->area();
    }
    shape *ptr1;
    ptr1=s;
    for(int i=0;i<n2;i++)
    {
    ptr1->read();
    ptr1->area();
    }
    return 0;
}