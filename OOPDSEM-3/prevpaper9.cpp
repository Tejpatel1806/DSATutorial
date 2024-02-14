#include<iostream>
using namespace std;
class sample
{
    int data;
    public:
    sample()
    {
        data=0;
    }
    sample(int a)
    {
        data=a;
    }
    sample(sample &a4)
    {
        data=a4.data;
    }
    void display()
    {
        cout<<"data is "<<data<<endl;
    }
};
int main()
{
    sample s1(12);
    sample s2;
    s2=s1;
    s2.display();
    sample s3(s1);
    s3.display();
    return 0;
}