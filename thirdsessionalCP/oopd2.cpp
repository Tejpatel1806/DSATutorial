#include<iostream>
using namespace std;
int main()
{
    int p,q;
    cin>>p>>q;
    char a;
    cin>>a;
    switch(a)
    {
        case '+':
        cout<<"The addition is"<<p+q;
        break;
        case '-':
        cout<<"The substraction is"<<p-q;
        break;
        case '*':
        cout<<"The Multiplication is"<<p*q;
        break;
        case '/':
        cout<<"The dividision is"<<p/q;
        break;
    }
    return 0;
}