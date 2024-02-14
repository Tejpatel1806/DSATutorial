#include<iostream>
using namespace std;
// double e(int x,int n)
// {
//     static double p=1,f=1;
//     double r;
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+p/f;
//     }
// }
// int main()
// {
//     cout<<e(1,10)<<endl;
//     return 0;
// }
//e(1,10) no matlab e^1 ane 10 term sudhi javanu em
//ANOTHER APPOARCH IS 
// double e(int x,int n)
// {
//     double s=1.00;
//     for(n>0;n--;)
//     {
//         s=1+x/n*s;
//     }
//     return s;
// }
// int main()
// {
//     cout<<e(1,10)<<endl;
//     return 0;
// }
//most comman method for taylors series is
double e(int x,int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++)
    {
        num=num*x;
        den=den*i;
        s=s+num/den;
    }
    return s;
}
int main()
{
    cout<<e(1,10)<<endl;
    return 0;
}