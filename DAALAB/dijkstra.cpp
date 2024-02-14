#include <bits/stdc++.h>
using namespace std;
int getmindistance(int ans[], int vis[], int n)
{
    int min = INT_MAX;
    int minindex = -1;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0 && ans[i] < min)
        {
            min = ans[i];
            minindex = i;
        }
    }
    return minindex;
}
void getid(int arr[][10], int start, int n)
{
    int ans[n];
    int vis[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = INT_MAX;
        vis[i] = 0;
    }
    int x = getmindistance(ans, vis, n);
    vis[x] = 1;
    for (int p = 0; p < n; p++)
    {
        if (vis[p] == 0 && arr[x][p] != 0 && ans[x] != INT_MAX && ans[x] + arr[x][p] < ans[p])
        {
            ans[p] = ans[x] + arr[x][p];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " " + ans[i];
    }
}
int main()
{
    int n;
    cout << "ENTER THE TOTAL NO.OF NODES: ";
    cin >> n;
    int e;
    cout << "ENTER TOTTAL NO. OF EDGES: ";
    cin >> e;
    int arr[n][n];
    for (int i = 0; i < e; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        arr[x][y] = z;
        arr[y][x] = z;
    }
    int start;
    cout << "ENTER THE START INDEX: ";
    cin >> start;
    getid(arr, start, n);
}