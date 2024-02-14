#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"enter salary"<<endl;
    cin>>salary;
    int hra,da,gs;
    hra=(35*salary)/100;
    da=(12.9*salary)/100;
    gs=hra+da+salary;
    cout<<"total salary is:"<<gs;
    return 0;
}