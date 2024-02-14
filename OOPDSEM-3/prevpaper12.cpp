#include<iostream>
using namespace std;
class abc
{
    protected:
    char moviename[20];
    int actorinfo;
    char directorname[20];
    public:
    void getdata()
    {
        cout<<"enter the value:";
        cin>>moviename>>actorinfo>>directorname;
    }
    void printdata()
    {
          cout<<"moviename is: "<<moviename<<"\n";
          cout<<"actorinfo is: "<<actorinfo<<"\n";
          cout<<"directorname is: "<<directorname<<"\n";
    }

};
class def:public abc{
    protected:
    int price;
    int audiodisk;
    public:
    void getdata1()
    {
        abc::getdata();
        cin>>price>>audiodisk;
    }
    void printdata1()
    {
        abc::printdata();
        cout<<"price is "<<price<<"\n";
        cout<<"audiodisk is "<<audiodisk<<"\n";
    }
};
class pqr:public abc,public def{
      public:
      void getdata()
      {
          def:getdata1();
      }
};
int main()
{
    pqr a1;
    a1.getdata1();
    a1.printdata1();
    return 0;
}