#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    private:
    int empid;
    char empname[20];
    int salry;
    public:
    void accept(int a,char b[],int c)
    {
        empid=a;
        strcpy(empname,b);
        salry=c+(0.25*c)+800+(0.15*c);
    }
    void display()
    {
        cout<<empid<<" "<<empname<<" "<<salry<<endl;
    }
}a[2];
int main()
{
    for(int i=0;i<2;i++)
    {
        int x,y;
        cin>>x>>y;
        char r[20];
        cin>>r;
        a[i].accept(x,r,y);
        a[i].display();
    }
    return 0;
}