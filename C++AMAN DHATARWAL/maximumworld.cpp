#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currlength=0;
    int maxlength=0;
    while(1)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            if(currlength>maxlength)
            {
                maxlength=currlength;
            }
            currlength=0;
        }
        else
        {
            currlength++;
        }
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlength;
}