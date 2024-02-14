#include<bits/stdc++.h>
using namespace std;
int editdistance(string x,string y)
{
    int xlen=x.length();
    int ylen=y.length();
    int arr[xlen+1][ylen+1];
    for(int k=0;k<=xlen;k++)
    {
        arr[k][0]=k;
    }
    for(int k=0;k<=ylen;k++)
    {
        arr[0][k]=k;
    }
    for(int i=1;i<=xlen;i++)
    {
        for(int j=1;j<=ylen;j++)
        {
            if(x[i-1]==y[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=min(arr[i-1][j]+1,min(arr[i][j-1]+1,arr[i-1][j-1]+1));
            }
        }
    }
    return arr[xlen][ylen];
}
int main()
{
    string s,s1;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>s1;
    int p=editdistance(s,s1);
    cout<<"THE EDIT DISTANCE BETWEEN THIS TWO STRING IS: "<<p;
}