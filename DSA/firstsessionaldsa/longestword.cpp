#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr1[30];
    cin.getline(arr1,30);
    // cout<<arr1;
    // cout<<strlen(arr1);
    int count=0;
    int i1=-1;
    int arr[20];
    int p1=0;
    int j;
    vector<int> v,v1;
    for(int i=0;i<=strlen(arr1);i++)
    {
        if(arr1[i]==' '|| arr1[i]=='\0')
        {
           arr[p1]=count;
           p1++;
           count=0;
           v.push_back(i1);
           j=i;
           v1.push_back(j);
           i1=i;
        }
        else
        {
            count++;
        }
    }
    int max=0;
    int pos;
    for(int i=0;i<p1;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    cout<<"Maximum length of the word is: ";
    cout<<max;
    cout<<endl<<"and word is :";
    int f=v[pos];
    int f1=v1[pos];
    for(int h=f+1;h<f1;h++)
    {
        cout<<arr1[h];
    }
    return 0;
}