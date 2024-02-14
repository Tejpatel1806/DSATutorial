#include<iostream>
using namespace std;
struct point 
{
    int a;
    int b;

};
 void sum(point a2,point b2)
{
    point b3;
    b3.a=a2.a+b2.a;
    b3.b=a2.b+b2.b;
    cout<<"the sum of this two coordinate is:";
    cout<<b3.a<<" "<<b3.b;
}
int main()
{
    point a1;
    point b1;
    cout<<"Enter the value of first point:";
    cin>>a1.a>>a1.b;
    cout<<"Enter the value of second point:";
    cin>>b1.a>>b1.b;
    sum(a1,b1);
    return 0;
}