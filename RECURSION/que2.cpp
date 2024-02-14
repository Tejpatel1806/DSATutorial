#include<iostream>
using namespace std;
char arr[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
int print(int g)
{
    if(g==0)
    {
        return 0;
    }
    else{
        int x=g%10;
        print(g/10);
        cout<<arr[x-1]<<" ";
        return 0;
    }
}
int main()
{
    int x;
    cin>>x;
    print(x);
    return 0;
}