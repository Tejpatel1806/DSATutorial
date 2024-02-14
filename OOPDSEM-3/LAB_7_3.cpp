#include<iostream>
using namespace std;
class marks
{
    protected:
    float sub1;
    float sub2;
    public:
    marks(){
        cout<<"enter the value of sub1 and sub2: ";
        cin>>sub1>>sub2;
    }
};
class total:public marks
{
    protected:
    float total1;
    public:
    total(){
        cout<<"enter the total marks:";
        cin>>total1;
    }
};
class percentage:public total
{
    protected:
    float percentage1;
    public:
    percentage()
    {
        float p=sub1+sub2;
        percentage1=((p/total1)*100);
        cout<<"percentage is"<<" "<<percentage1;
    } 
};
int main()
{
    percentage d[1];
    return 0;
}
