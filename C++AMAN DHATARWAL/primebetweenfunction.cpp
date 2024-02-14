#include<iostream>
#include<math.h>
using namespace std;
void prime(int a,int b);
void prime(int a,int b)
{
    int count,i,j;
    for(i=a;i<=b;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int c,d;
    cout<<"enter the two number"<<endl;
    cin>>c>>d;
    prime(c,d);
    return 0;
}