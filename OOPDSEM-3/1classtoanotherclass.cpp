#include<iostream>
using namespace std;
class product
{
    private:
    int m,n;
    public:
    void setdata()
    {
        cout<<"enter the value:";
        cin>>m>>n;
    }
    int aas()
    {
        return m;
    }
    int aas1()
    {
        return n;
    }
};
class item
{
    int a,b;
    public:
    item()
    {

    }
    item(product p)
    {
        a=p.aas();
        b=p.aas1();
    }
    void showdata()
    {
        cout<<"the value is ";
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata();
    i1=p1;//constrctor e class ma banavanu je = ni left side hou
    i1.showdata();
    return 0;
}