#include<bits/stdc++.h>
using namespace std;
const int n=2;
class asd
{
    private:
    int a[n][n];
    public:
    asd()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=0;
            }
        }
    }
    asd(int s)
    {
        for(int i1=0;i1<n;i1++)
        {
            for(int j1=0;j1<n;j1++)
            {
                a[i1][j1]=s;
            }
        }
    }
    void getdata()
    {
        cout<<"enter the array: "<<endl;
        for(int i5=0;i5<n;i5++)
        {
            for(int j5=0;j5<n;j5++)
            {
                cin>>a[i5][j5];
            }
        }
    }
    void printdata()
    {
        cout<<"the resultant array is: "<<endl;
        for(int i5=0;i5<n;i5++)
        {
            for(int j5=0;j5<n;j5++)
            {
                cout<<setw(3)<<a[i5][j5]<<setfill(' ')<<" ";
            }
            cout<<endl;
        }
    }
    asd operator +(asd p1)
    {
        asd y1;
        for(int i2=0;i2<n;i2++)
        {
            for(int j2=0;j2<n;j2++)
            {
                y1.a[i2][j2]=a[i2][j2]+p1.a[i2][j2];
            }
        }
        return y1;
    }
};
int main()
{
    asd l1,l2;
    l1.getdata();
    l2.getdata();
    asd l3;
    l3=l1+l2;
    l3.printdata();
    return 0;
}