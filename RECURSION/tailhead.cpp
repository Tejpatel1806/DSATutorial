#include<iostream>
using namespace std;
void fun21(int n)
{
    if(n>0)
    {
        fun21(n-1);
        cout<<n<<" ";
    }
    cout<<"hello"<<endl;
}
int main()
{
    int x=5;
    fun21(x);
}