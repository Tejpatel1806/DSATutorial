#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void setdata()
    {
        cout<<"enter the value";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"the data is";
        cout<<a<<" "<<b;
    }

};
int main()
{
    complex c;
    int x=5;
    c=x;
    c.show();
    return 0;
}