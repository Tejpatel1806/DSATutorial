#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;
    float price;
public:
    void getdata1()
    {
        cout<<"Enter the Name of Publications:\n";
        cin>>title;
        cout<<"Enter the Price:\n";
        cin>>price;
    }
    void putdata1()
    {
        cout<<"\nTITLE= "<<title;
        cout<<"\nPRICE= "<<price;
    }
};
class Sales
{
protected:
    float s1,s2,s3;
public:
    void getdata2()
    {
        cout<<"Enter the Sales of last 3 months:\n";
        cin>>s1; cout<<"\n";

    }
    void putdata2()
    {
        cout<<"\nSales = "<<s1;
    }
};
class Book : public Sales, public Publication
{
protected:
    int pages;
public:
    void getdata3()
    {
        cout<<"Enter The total no of pages:\n";
        cin>>pages;
    }
    void putdata3()
    {
        cout<<"\nTotal Pages= "<<pages;
    }
};
class Tape : public Sales, public Publication
{
protected:
    float time;
public:
    void getdata4()
    {
        cout<<"Enter the time in minutes:";
        cin>>time;
    }
    void putdata4()
    {
        cout<<"\nTotal Play time= "<<time;
    }
};
class Pamphlet :public Publication
{
public:
};
class Notice :public Pamphlet
{
private:
    string t;
public:
    void getdata5()
    {
    cout<<"Enter the type of distributor (ONLINE/OFFLINE):\n";
    cin>>t;
    }
    void putdata5()
    {
        cout<<"\nType of a Distributer Is: "<<t;
    }
};
int main()
{
    Notice n;
    Book b;
    Tape t;
    cout<<"Enter the Details:\n";
    n.getdata1();
    n.getdata5();

    t.getdata1();
    t.getdata2();
    t.getdata4();

    b.getdata1();
    b.getdata3();
    b.getdata2();


    cout<<"The details are:\n";
    n.putdata1();
    n.putdata5();

    t.putdata1();
    t.putdata2();
    t.putdata4();

    b.putdata1();
    b.putdata3();
    b.putdata2();


    return 0;
}