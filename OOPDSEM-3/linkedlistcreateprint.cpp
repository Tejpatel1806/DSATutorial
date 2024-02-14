#include<iostream>
using namespace std;
class abc
{
    public:
    int number;
    abc *ptr;
};
void create(abc *pyt)
{
    cin>>(pyt->number);
    if(pyt->number!=-110)
    {
        abc *poi;
        poi=new abc;
        pyt->ptr=poi;
        create(poi);
    }
    else
    {
        pyt->ptr=NULL;
    }
} 
void print(abc *uio)
{
    abc *rtu=uio;
    while(rtu->ptr!=NULL)
    {
        cout<<(rtu->number)<<" ";
        rtu=rtu->ptr;
    }
}
int main()
{
    abc *first;
    first=new abc;
    create(first);
    print(first);
    return 0;
}
// linkedlist create using for loop
//  void create(int n)
//  {
//     abc *temp,*result;
//      temp=NULL;
//     for(int i=0;i<5;i++)
// {
//     result=new abc;
//     result->number=i;
//     result->ptr=temp;
//     temp=result;
// }
