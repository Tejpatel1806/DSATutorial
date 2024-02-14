#include<iostream>
using namespace std;
class doller
{
    int doller1;
    public:
    doller(){}
    doller(int s)
    {
        doller1=s;
    }
    int getdata()
    {
        return doller1;
    }
    void showdata()
    {
        cout<<"doller is"<<doller1<<endl;
    }
};
class Rupee
{
    int rup;
    public:
    Rupee(){}
    Rupee(doller d1)
    {
          rup=((d1.getdata())/75);
    }
    void getdata()
    {
        cout<<"Enter the rupees:";
        cin>>rup;
    }
    void showdata()
    {
        cout<<"paisa is"<<rup<<endl;
    }
    operator doller()
    {
        return(doller(rup*75));
    }
};
int main()
{
    Rupee r2;
    doller d1;
    r2.getdata();
    d1=r2;
    r2=d1;
    d1.showdata();
    r2.showdata();
    return 0;
}
