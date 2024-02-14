#include<iostream>
using namespace std;
int powerof(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else{
        return(n*powerof(n,p-1));
    }

}
int main()
{
   int a,b;
   cin>>a>>b;
  int c =powerof(a,b);
  cout<<c;
}