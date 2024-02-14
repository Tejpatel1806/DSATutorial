#include<iostream>
using namespace std;
void n_raiseto_p(int n,int p)
{
    int sum=1;
    for(int i=1;i<=p;i++)
    {
        sum=sum*n;
    }
    cout<<sum<<endl;
}
int main()
{
    int n,p;
    cin>>n>>p;
    n_raiseto_p(n,p);
    return 0;
}