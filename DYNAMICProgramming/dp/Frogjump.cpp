#include <bits/stdc++.h>
using namespace std;
int f(int n, vector<int> &a, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int left = f(n - 1, a, dp) + abs(a[n] - a[n - 1]);
    int right = INT_MAX;
    if (n > 1)
    {
        right = f(n - 2, a, dp) + abs(a[n] - a[n - 2]);
    }
    return dp[n] = min(left, right);
}
int main()
{
    int p;
    cin >> p;
    vector<int> heights;
    for (int i = 0; i < p; i++)//height ne input lidhu aapde
    {
        int x;
        cin >> x;
        heights.push_back(x);
    }
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n-1, heights, dp);//n-1 moklvanu karan index 0 thi start thay ane aapde n-1 pochvu che etle
}

//Memoization Approach
// int f(int n,vector<int> &a)
// {
//     vector<int> dp(n,0);
//     dp[0]=0;
//     for(int i=1;i<n;i++)
//     {
//         int fs=dp[i-1]+abs(a[i]-a[i-1]);
//         int ss=INT_MAX;
//         if(i>1)
//         {
//             ss=dp[i-2]+abs(a[i]-a[i-2]);
//         }
//         dp[i]=min(fs,ss);
//     }
//     return dp[n-1];
// }