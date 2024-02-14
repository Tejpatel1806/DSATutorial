#include<bits/stdc++.h>
using namespace std;
int ans[1000];
int findmin(int coins[],int size,int value)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        while(value>=coins[i])
        {
            value=value-coins[i];
            ans[count]=coins[i];
            count++;
        }
        if(value==0)
        {
            break;
        }
    }
    return count;
}
int main()
{
    int value,size;
    cout<<"ENTER THE SIZE OF COINS ARRAY: ";
    cin>>size;
    int coins[size];
    cout<<"ENTER THE COINS: ";
    for(int i=0;i<size;i++)
    {
        cin>>coins[i];
    }
    cout<<"ENTER THE FINAL VALUE THAT WE MADE: ";
    cin>>value;
    int mincount=findmin(coins,size,value);
    cout<<"Total minimum coins needed is: "<<mincount<<endl;
    cout<<"Coins are: ";
    for(int i=0;i<mincount;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}