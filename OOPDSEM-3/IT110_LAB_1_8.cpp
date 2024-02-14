#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int factorial=1;
    while (num)
    {
        factorial=num*factorial;
        num--;
    }
    cout<<"factorial is "<<factorial;
    return 0;
}