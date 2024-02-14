#include<iostream>
#include<string>
using namespace std;
class xyz
{
    string s;
    public:
    void read_binary();
    void check_binary();
    void ones_complement();
    void display();
};
void xyz :: read_binary()
{
    cout<<"enter the string"<<endl;
    cin>>s;
}
void xyz :: check_binary()
{
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"not a binary number"<<endl;
            exit(0);
        }
    }
}
void xyz :: ones_complement()
{
    for(int j=0;j<s.length();j++)
    {
        if(s.at(j)=='0')
        {
            s.at(j)='1';
        }
        else
       {
           s.at(j)='0';
       }
    }
}
void xyz :: display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    xyz f;
    f.read_binary();
    f.check_binary();
    cout<<"before ones complement"<<endl;
    f.display();
    f.ones_complement();
    f.display();
    return 0;
}