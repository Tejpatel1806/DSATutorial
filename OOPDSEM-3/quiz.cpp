#include <iostream>
using namespace std;
// 15>
// class Base
// {
// public:
// Base() { cout << "Base"; }
// };

// class Derived : public Base
// {
// public:
// Derived(int i) { cout << i; }
// };

// int main()
// {
// Derived d2(10);
// return 0;
// }
// 14>
// class Base
// {
// protected:
// int a;
// public:
// Base() {a = 0;}
// };
// class Derived1: public Base
// {
// public:
// int c;
// };
// class Derived2: public Base
// {
// public:
// int c;
// };
// class Derived: public Derived1, public Derived2
// {
// public:
// void show() { cout << a; }
// };
// int main(void)
// {
// Derived d;
// d.show();
// return 0;
// }
// 13>
// class Base1
// {
// public:
// char c;
// };
// class Base2
// {
// public:
// int c;
// };
// class Derived: public Base1, public Base2
// {
// public:
// void show() { cout << c; }
// };
// int main(void)
// {
// Derived d;
// d.show();
// return 0;
// }
// 12>
// class Base
// {
// public :
// int x, y;
// public:
// Base(int i, int j){ x = i; y = j; }
// };

// class Derived : public Base
// {
// public:
// Derived(int i, int j):x(i), y(j) {}
// void print() {cout << x <<" "<< y; }
// };

// int main(void)
// {
// Derived q(10, 10);
// q.print();
// return 0;
// }
// 11>
// class Base {
// public:
// int fun() { cout << "Base::fun() called"; }
// int fun(int i) { cout << "Base::fun(int i) called"; }
// };

// class Derived: public Base {
// public:
// int fun() { cout << "Derived::fun() called"; }
// };

// int main() {
// Derived d;
// d.Base::fun(5);
// return 0;
// }
// 10>
// class Base
// {
// public:
// int fun() { cout << "Base::fun() called"; }
// int fun(int i) { cout << "Base::fun(int i) called"; }
// };

// class Derived: public Base
// {
// public:
// int fun() { cout << "Derived::fun() called"; }
// };

// int main()
// {
// Derived d;
// d.fun(5);
// return 0;
// }
// 9>
// class P {
// public:
// void print() { cout <<" Inside P"; }
// };
// class Q : public P {
// public:
// void print() { cout <<" Inside Q"; }
// };
// class R: public Q { };
// int main(void)
// {
// R r;
// r.print();
// return 0;
// }
// 10>
// class Base1 {
// public:
// ~Base1() { cout << " Base1's destructor" << endl; }
// };
// class Base2 {
// public:
// ~Base2() { cout << " Base2's destructor" << endl; }
// };
// class Derived: public Base1, public Base2 {
// public:
// ~Derived() { cout << " Derived's destructor" << endl; }
// };
// int main()
// {
// Derived d;
// return 0;
// }
// 9>
// class Base1 {
// public:
// Base1()
// { cout << " Base1's constructor called" << endl; }
// };
// class Base2 {
// public:
// Base2()
// { cout << "Base2's constructor called" << endl; }
// };
// class Derived: public Base1, public Base2 {
// public:
// Derived()
// { cout << "Derived's constructor called" << endl; }
// };
// int main()
// {
// Derived d;
// return 0;
// }
// 8>
// class Test2
// {
// int y;
// };
// class Test
// {
// int x;
// Test2 t2;
// public:
// operator Test2 () { return t2; }
// operator int () { return x; }
// };
// void fun ( int x) { cout << "fun(int) called"; }
// void fun ( Test2 t ) { cout << "fun(Test 2) called"; }
// int main()
// {
// Test t;
// fun(t);
// return 0;
// }
// 7>

//  class Box{
//  int capacity;
//  public:
//  Box(){}
//  Box(double c){
//  capacity = c;
//  }
//  bool operator<(Box b){
//  return b.capacity < capacity? true : false;
//  }
//  };

// int main()
//  {
//  Box b1(10);
//  Box b2 = Box(14);
// if(b1 < b2){
//  cout<<"B1's capacity is small";
//  }
//  else{
//  cout<<"B2's capacity is small";
//  }
//  return 0;
//  }
//  8>
// class Box{
// int capacity;
//  bool operator<(Box b){
//  return b.capacity < capacity? true : false;
//  }
//  public:
//  Box(){}
//  Box(double c){
//  capacity = c;
//  }
//  };

//  int main()
//  {
//  Box b1(10);
//  Box b2 = Box(14);
//  if(b1 < b2){
//  cout<<"B1's capacity is small";
//  }
//  else{
//  cout<<"B2's capacity is small";
//  }
//  return 0;
//  }
// 7>
// class complex
// {
//     int i;
//     int j;

// public:
//     complex() {}
//     complex(int a, int b)
//     {
//         i = a;
//         j = b;
//     }
//     complex operator+(complex c)
//     {
//         complex temp;
//         temp.i = i + c.i;
//         temp.j = j + c.j;
//         return temp;
//     }
//     void operator+(complex c)
//     {
//         complex temp;
//         temp.i = i + c.i;
//         temp.j = j + c.j;
//         temp.show_poss();
//     }
//     void show()
//     {
//         cout << "Complex Number: " << i << " + i" << j << endl;
//     }
//     void show_poss()
//     {
//         cout << "Your result after addition will be: " << i << " + i" << j << endl;
//     }
// };
// int main()
// {
//     complex c1(1, 2);
//     complex c2(3, 4);
//     c1 + c2;
//     return 0;
// }