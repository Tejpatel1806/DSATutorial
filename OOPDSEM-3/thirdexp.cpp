#include<iostream>
using namespace std;
// class A
// {
// public:
// virtual void fun() { cout << "A::fun() "; }
// };
// class B: public A
// {
// public:
// void fun() { cout << "B::fun() "; }
// };
// class C: public B
// {
// public:
// void fun() { cout << "C::fun() "; }
// };
// int main()
// {
// B *bp = new C;
// bp->fun();
// return 0;
// }
////2>
// class Base
// {
// public:
// virtual void show() { cout<<" In Base n"; }
// };

// class Derived: public Base
// {
// public:
// void show() { cout<<"In Derived n"; }
// };

// int main(void)
// {
// Base *bp = new Derived;
// bp->Base::show();
// return 0;
//}
// int main()
// {
// char str1[] = "hello";
// char str2[] = "bye";
// char *s1 = str1, *s2=str2;
// while(*s1++ = *s2++)
// cout<<str1;

// cout<<endl;
// return 0;
// }
void fun(int *p)
{
int q = 10;
p = &q;
}
int main()
{
int r = 20;
int *p = &r;
fun(p);
cout<< *p;
return 0;
}