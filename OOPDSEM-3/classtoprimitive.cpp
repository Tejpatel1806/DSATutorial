#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void setdata()
    {
        cout<<"enter the value:";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"the value is:";
        cout<<a<<" "<<b<<endl;
    }
    operator int()
    {
         return(a);// aa a hase c no means c.a
    }
};
int main()
{
    complex c;
    c.setdata();
    c.show();
    int x;
    x=c;//x=c.operator int();//je return karse te x ma jase
    cout<<x;
    return 0;
}