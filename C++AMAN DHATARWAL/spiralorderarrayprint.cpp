#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int row_start=0;
    int row_end=n-1;
    int columm_start=0;
    int columm_end=m-1;
    while(row_start<=row_end&&columm_start<=columm_end)
    {
        for(int i=columm_start;i<=columm_end;i++)
        {
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        for(int j=row_start;j<=row_end;j++)
        {
            cout<<a[j][columm_end]<<" ";
        }
        columm_end--;
        for(int k=columm_end;k>=columm_start;k--)
        {
            cout<<a[row_end][k]<<" ";
        }
        row_end--;
        for(int h=row_end;h>=row_start;h--)
        {
            cout<<a[h][columm_start]<<" ";
        }
        columm_start++;
    }
    return 0;
}