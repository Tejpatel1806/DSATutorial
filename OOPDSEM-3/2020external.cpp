#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_no;
    char branch[20];
    public:
    void readdata()
    {
        cin>>roll_no>>branch;
    }
    void displaydata()
    {
        cout<<roll_no<<branch;
    }
};
class internalexam:protected student
{
   protected:
   int s1,s2;
   public:
   void read()
   {
       student::readdata();
       cin>>s1>>s2;
   }
   void display()
   {
       cout<<s1<<s2;
   }
};
class externalexam:protected student
{
   protected:
   int p1,p2;
   public:
   void read()
   {
       cin>>p1>>p2;
   }
   void display()
   {
       cout<<p1<<p2;
   }
};
class result:protected internalexam,protected externalexam
{
    public:
   void read1()
   {
       internalexam::read();
       externalexam::read();
   }
   void adding()
   {
       cout<<"THE RESULT OF THIS STUDENT IS: "<<
       p1+p2+s1+s2<<endl;
   }
};
int main()
{
    int n;
    cin>>n;
    result t[n];
    for(int i=0;i<n;i++)
    {
        t[i].read1();
        t[i].adding();
    }
}