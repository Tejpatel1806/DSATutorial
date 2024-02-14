#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
    cout<<"HELLO"<<endl;
}
int main()
{
    int x=3;
    fun(3);
    return 0;
}