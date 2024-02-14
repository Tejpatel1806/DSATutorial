#include<iostream>
using namespace std;
// class test
// {
//     public:
//     int a;
//     test()
//     {
//         a=10;
//     }
// };
// class test1
// {
//     int b;
//     public:
//     test1()
//     {
//         b=0;
//     }
//     test1(int a)
//     {
//         b=a;
//     }
//     test1(test t1)
//     {
//         b=t1.a;
//     }
//     void show()
//     {
//         cout<<b;
//     }
// };
// int main()
// {
//     test t1;
//     test1 t2;
//     t2=t1;
//     t2.show();
//     return 0;
// }
// void func(int a,int &b)
// {
//     a=a+b;
//     b=a++;
// }
// int main()
// {
//     int a=2,b=4;
//     func(a,a);
//     cout<<a<<b;
// }
class test
{
    int a;
    public:
    test()
    {
        a=0;
    }
    test(test t1)
    {
        a=a++;
    }
    void show()
    {
        cout<<a;
    }

};
int main()
{
    test t1;
    t1=10;
    t1.show();
    return 0;
}