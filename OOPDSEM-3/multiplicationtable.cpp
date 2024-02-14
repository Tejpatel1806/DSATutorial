#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,count=0;
    cout<<"Enter the digit do you want to see multiplication table:";
    cin>>t;
        for(int i=1;i<=30;i++)
        {
            count++;
            int x=(t*i);
            cout<<" "<<setw(3)<<x;
            if(count==10)
            {
                cout<<endl;
                count=0;
            }
        }
  return 0;
}
