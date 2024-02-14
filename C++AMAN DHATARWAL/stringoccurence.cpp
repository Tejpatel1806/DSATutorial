#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abcdfgggghhhhkljui";
    char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    int p=s.length();
    int a[26];
    int k=0;
    for(int i=97;i<=122;i++)
    {
      int count=0;
        for(int j=0;j<p;j++)
        {
            if(s[j]==i)
            {
            count =count+1;
            }
        }
        a[k]=count;
        k++;
    }
    int max=a[0];
    int pos=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i;
        }
    }
    cout<<max<<" ";
    cout<<c[pos];
    return 0;
}