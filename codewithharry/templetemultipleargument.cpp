#include<iostream>
using namespace std;
template<class T1,class T2>
class myclass
{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 m,T2 p)
    {
        data1=m;
        data2=p;
    }
    void display()
    {
        cout<<"the value of data1 is "<<data1<<endl;
        cout<<"the value of data2 is "<<data2<<endl;
    }
};
int main()
{
    myclass<int,char>abc(578,'l');
    abc.display();
}