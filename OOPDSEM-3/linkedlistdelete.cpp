#include <iostream>
using namespace std;
class abc
{
public:
    int number;
    abc *ptr;
};
void create(abc *pyt)
{
    cin >> (pyt->number);
    if (pyt->number != -110)
    {
        abc *poi;
        poi = new abc;
        pyt->ptr = poi;
        create(poi);
    }
    else
    {
        pyt->ptr = NULL;
    }
}
void print(abc *uio)
{
    abc *rtu = uio;
    while (rtu->ptr != NULL)
    {
        cout << (rtu->number) << " ";
        rtu = rtu->ptr;
    }
}
void middledelete(abc * klj,int y)
{
    //which element do you want to delete in that basis 
    // abc *uij=klj;
    // abc *uij1=klj->ptr;
    // while((uij1->number)!=y)
    // {
    //     uij1=uij1->ptr;
    // }
    // uij->ptr=uij1->ptr;
    // delete(uij1);

    //which index element do you want to delete in that basis
    abc *uij=klj;
    abc *uij1=klj->ptr;
    int count=1;
    while((count)!=y-1)
    {
        uij=uij->ptr;
        uij1=uij1->ptr;
        count++;
    }
    uij->ptr=uij1->ptr;
    delete(uij1);
}
void lastdelete(abc * yuh)
{
    abc *yup=yuh;
    while((yup->ptr->ptr)!=NULL)
    {
        yup=yup->ptr;
    }
    delete(yup->ptr);
    yup->ptr=NULL;
}
abc * firstdelete(abc * pyu)
{
    abc *ioj=pyu->ptr;
    delete(pyu);
    return(ioj);
}
int main()
{
    abc *first;
    first = new abc;
    create(first);
    int t1;
    cout<<"enter the number for deletion first(1) middle(2) last(3) :";
    cin>>t1;
    if(t1==2)
    {
        int c1;
        cout<<"Enter the element do you want to delete: ";
        cin>>c1;
        middledelete(first,c1);
        print(first);
    } 
    if(t1==3)
    {
        lastdelete(first);
        print(first);
    }
    if(t1==1)
    {
        abc *ghj;
        ghj=firstdelete(first);
        print(ghj);   
    }
    return 0;
}