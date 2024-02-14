#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the size of the union set:";
    cin>>n;
    int a[n];
    cout<<"enter the element of union set:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int n1;
    int o=0;
    int c[100];
    label:
    cout<<"enter the size of the A set:";
    cin>>n1;
    if(n1>n)
    {
        cout<<"impossible try again"<<endl;
        goto label;
    }
    int b[n1];
    vcf:
    cout<<"enter the element of A set:";
    for(int i=0;i<n1;i++)
    {
        cin>>b[i];
    }
    int count1=0;
    for(int i=0;i<n1;i++)
    {
        count1=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                count1=1;
            }
        }
        if(count1==0)
        {
            cout<<"their is impossible try again:"<<endl;
            goto vcf;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n1;j++)
        {
            if(a[i]==b[j])
            {
            }
            else
            {
                count++;
            }
        }
        if(count==n1)
        {
            c[o]=a[i];
            o++;
        }
    }
    for(int k=0;k<o;k++)
    {
        for(int g=k+1;g<o;g++)
        {
            if(c[k]==c[g])
            {
                c[k]=0;
            }
        }
    }
    for(int i=0;i<o;i++)
    {
        if(c[i]!=0)
        {
        cout<<c[i]<<" ";
        }
    }
    if(o==0)
    {
        cout<<"NULL SET"<<endl;
    }
    return 0;
}