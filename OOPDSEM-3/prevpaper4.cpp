#include<iostream>
using namespace std;
class toolbooth
{
    private:
    int totalcar;
    int totalamount;
    public:
    toolbooth()
    {
        totalcar=0;
        totalamount=0;
    }
    void payingcar()
    {
        totalcar++;
        totalamount=totalamount+50;
    }
    void nonpaycar()
    {
        totalcar++;
    }
    void display()
    {
        cout<<totalcar<<" "<<totalamount;
    }
};
int main()
{


}