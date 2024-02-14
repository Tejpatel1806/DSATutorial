#include <iostream>
using namespace std;
void swap(int &a, int &b)
{

   a = a + b;
   b = a - b;
   a = a - b;
   cout << "Value of a and b after swapping" << endl << a << " " << b;
}
int main()
{
   int a, b;
   cout << "Enter value of a and b" << endl;
   cin >> a >> b;
   swap(a, b);
   return 0;
}