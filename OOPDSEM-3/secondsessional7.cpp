#include<iostream>
using namespace std;
class student
{
    private:
    char branch[20];
    int rollno;
    public:
    void getdata()
    {
        cout<<"enter the value:";
        cin>>branch>>rollno;
    }
    void display()
    {
        cout<<"the value is:"<<branch<<" "<<rollno<<" ";
    }
};
class internalexam:public student
{
   protected:
   int internalmarks;
   int attendencemarks;
   public:
   void getdata1()
   {
       student:getdata();
       cin>>internalmarks>>attendencemarks;
   }
   void display1()
   {
       student:display();
       cout<<internalmarks<<" "<<attendencemarks<<" ";
   }
};
class externalexam:public student{
    protected:
    int externalmarks;
    public:
    void getdata2()
    {
        cin>>externalmarks;
    }
    void display2()
    {
        cout<<externalmarks<<" ";
    }
};
class result:public internalexam,public externalexam
{
    private:
    int total;
    public:
    void pass()
    {
        total=externalmarks+internalmarks+attendencemarks;
        if(total>=40)
        {
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
    }
};
int main()
{
    result r[5];
    for(int i=0;i<5;i++)
    {
         r[i].getdata1();
         r[i].getdata2();
    }
    for(int j=0;j<5;j++)
    {
        r[j].display1();
        r[j].display2();
        r[j].pass();
    }
    return 0;
}