#include<iostream>
using namespace std;
class fahrenheit;
float lkj();
class celsius{
    private:
    float r;
    public:
    celsius(){}
    celsius(float d)
    {
        r=d;
    }
    celsius(fahrenheit df)
    {
       r=df.lkj();
    }
    void show()
    {
        cout<<"The data is"<<" "<<r<<endl;
    }
    float sd()
    {
        return r;
    }
};
class fahrenheit{
    private:
    float d;
    public:
    fahrenheit(){}
    void show1()
    {
        cout<<"The data is"<<" "<<d<<endl;
    }
    fahrenheit(celsius c2)
    {
        d=c2.sd();
    }
    float lkj()
    {
        return d;
    }
};
int main()
{
    celsius c1,c2=5.0;
    fahrenheit f1,f2;
    f1=c2;
    c1=f2;
    return 0;
}