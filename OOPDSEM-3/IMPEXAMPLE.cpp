#include<iostream>
using namespace std;
class celsius
{
    private:
    float f;
    public:
    celsius(){}
    celsius(float f1)
    {
        f=f1;
    }
    void getdata()
    {
        cout<<"Enter the data:";
        cin>>f;
    }
    void show()
    {
        cout<<"data is "<<f<<endl;
    }
    operator float()
    {
        return (f);
    }
};
int main()
{
    celsius c1;
    c1=30.5F;
    c1.show();
    float temp=c1;
    cout<<temp<<" "<<endl;
    return 0;
}