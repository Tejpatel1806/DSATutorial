#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<"gcd of two number is "<<a;
    return 0;

}
//gcd find karvani rit:
//assume a=42 and b=24
//42%24=18
//24%18=6
//18%6=0
//jya sudhi zero na aave tya sudhi aavu karta javnu pela a%b pachi a=b and b=a%b that's simple