#include <iostream>

using namespace std;
 void execute(int &x,int y=200)
 {
     int temp=x+y;
     x+=temp;
     if(y!=200)
     {
         cout<<temp<<x<<y<<" ";
     }
 }
int main()
{
    int a=50,b=20;
    cout<<a<<" "<<b;
    execute(a,b);
    cout<<a<<b<<" ";
    return 0;
}