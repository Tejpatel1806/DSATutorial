#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count=0,max=0,c,c1=0,a=0,b;
    int k=str.length()-1;//10
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ' && i>a){
        
        c1++;
        a=i;}
    }
string res;
int final=k-a;
int j,j1;
for(int i=0;i<=a;i++)
{
    
    count++;
    if(str[i]==' ' && max<count)
    {
        j=i-count;
        max=count-1;
        count=0;
        j1=i;
    }
    else
    {
        if(str[i]==' '&&max>=count)
        {
            count=0;
        }
    }
    
}
if(max<final)
{
    cout<<final;
    for(int i=a+1;i<=k;i++)
    {
       res=res+str[i]; 
    }
    
}
else
{
    cout<<max;
    for(int i=j;i<=j1;i++)
    {
        res=res+str[i];
    }
}
cout<<res;
}