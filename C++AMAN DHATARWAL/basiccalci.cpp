#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,multi,divi;
    char c;
    cout<<"enter the value:"<<endl;
    cin>>a>>b;
    cout<<"enter the chracter a for sum b for sub and c for multi d for divi"<<endl;
    cin>>c;
    switch(c)
    {
      case 'a':
      sum=a+b;
      cout<<sum;
      break;
      case 'b':
      sub=a-b;
      cout<<sub;
      break;
      case 'c':
      multi=a*b;
      cout<<multi;
      break;
      case 'd':
      divi=a/b;
      cout<<divi;
      break;
    }
    return 0;
}