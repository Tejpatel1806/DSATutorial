#include<iostream>
using namespace std;
struct phone_number
{
    int areacode;
    int exchange;
    int number;
};
int main()
{
    phone_number a1={212,767,8900};
    phone_number a2;
    cin>>a2.areacode>>a2.exchange>>a2.number;
    cout<<"My Phone Number is"<<"("<<a1.areacode<<")"<<" "<<a1.exchange<<"-"<<a1.number<<endl;
    cout<<"Your Phone Number is"<<"("<<a2.areacode<<")"<<" "<<a2.exchange<<"-"<<a2.number;
    return 0;
}