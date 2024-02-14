#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int id;
    char firstname[20];
    char lastname[20];
    float sub1;
    float sub2;
    float sub3;
    float percentage;
    public:
    void getdata()
    {
        cout<<"enter the values: ";
        cin>>id>>firstname>>lastname>>sub1>>sub2>>sub3;
    }
    void calculate()
    {
        float s=sub1+sub2+sub3;
         percentage=((s/300)*100);
    }
    void concate()
    {
        strcat(firstname,lastname);
    }
    void display()
    {
        cout<<"the details of the student is:";
        cout<<"id is "<<id<<" "<<"name is "<<firstname<<" "<<"the percentage of this student is: "<<percentage<<endl;
    }

};
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        a[i].getdata();
        a[i].calculate();
        a[i].concate();
        a[i].display();
    }
   return 0;
}