// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int salary;
//     int empid;

// public:
//     employee() {}
//     employee(const employee &s)
//     {
//         cout << "Copy constructor executed" << endl;
//         salary = s.salary;
//         empid = s.empid;
//     }
//     void getdata()
//     {
//         cout << "Enter the data of this employee: ";
//         cin >> salary >> empid;
//     }
//     void operator=(employee a)
//     {
//         cout << "assignment is executed" << endl;
//         salary = a.salary;
//         empid = a.empid;
//     }
//     void show()
//     {
//         cout << "data for this employee is: " << salary << " " << empid;
//     }
// };
// int main()
// {
//     employee s, d;
//     s.getdata();
//     employee r = s;
//     r.show();
//     d = s;
//     d.show();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class area
// {
// public:
//     void area1()
//     {
//     }
// };
// class circle : public area
// {
// public:
//     void area1()
//     {
//         cout << "area of the circle is calculated "<<endl;
//     }
// };
// class triangular : public area
// {
// public:
//     void area1()
//     {
//         cout << "area of the triangular is calculated "<<endl;
//     }
// };
// class rectangular:public area
// {
//    public:
//    void area1()
//    {
//        cout << "area of the rectangular is calculated "<<endl;
//    }
// };
// int main()
// {
//     triangular a;
//     a.area1();
//     circle b;
//     b.area1();
//     rectangular t;
//     t.area1();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int f(int x,int *py,int **ppz)
// {
//     int y,z;
//     **ppz+=1;
//     z=**ppz;
//     *py+=2;
//     y=*py;
//     x+=3;
//     cout<<x<<y<<z;
//     return x+y+z;
// }
// int main()
// {
//     int c,*b,**a;
//     c=4;
//     b=&c;
//     a=&b;
//     cout<<f(c,b,a);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class shape
// {
//     public:
//     virtual void print()
//     {
//         cout<<"shape";
//     }
// };
// class box:public shape
// {
//     public:
//     virtual void print(int i)
//     {
//         cout<<"box";
//     }
// };
// int main()
// {
//     shape *s=new box;
//     s->print();
//     return 0;
// }
#include<iostream>
using namespace std;
void show(int v1,int v2,int v3,int v4)
{
    cout<<v1<<v2<<v3<<v4;
}
int main()
{
    int a[]={1,2,3,4},idx=0;
    cout<<a[idx++]<<a[idx++]<<a[idx++]<<a[idx++];
    cout<<idx<<endl;
    return 0;
}