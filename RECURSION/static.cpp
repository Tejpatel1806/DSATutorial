// #include<iostream>
// using namespace std;
// int fun(int n)
// {
//     if(n>0)
//     {
//         return fun(n-1)+n;
//     }
//     return 0;
// }
// int main()
// {
//     int a=5;
//     int r;
//     r=fun(a);
//     cout<<r<<endl;
//     return 0;
// }
//using static variable in recursion
//static ni jagya e global hou to e same effect pade
#include<iostream>
using namespace std;
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    int r;
    r=fun(a);
    cout<<r<<endl;
    return 0;
}