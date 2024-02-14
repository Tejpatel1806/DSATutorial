
// #include <bits/stdc++.h>
// using namespace std;
// int knapsack(int weight[], int profit[], int n, int maxweight)
// {
//     int amount = 0;
//     int i = 0;
//     while (maxweight > 0 && i < n)
//     {
//         if (maxweight >= weight[i])
//         {
//             maxweight = maxweight - weight[i];
//             amount = amount + profit[i];
//             i++;
//         }
//         else
//         {
//             amount = amount + ((profit[i] * maxweight) / weight[i]);
//         }
//     }
//     return amount;
// }
// int main()
// {
//     int n;
//     cout << "ENTER TOTAL NO. OF ITEMS: ";
//     cin >> n;
//     int maxweight;
//     cout << "ENTER THE CAPACITY OF BAG: ";
//     cin >> maxweight;
//     int weight[n];
//     int profit[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "ENTER THE weight and profit of ITEM" << (i + 1) << ": ";
//         cin >> weight[i] >> profit[i];
//     }
//     double p_w[n];
//     for (int i = 0; i < n; i++)
//     {
//         p_w[i] = (double)profit[i] / (double)weight[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (p_w[i] < p_w[j])
//             {
//                 double temp = p_w[j];
//                 p_w[j] = p_w[i];
//                 p_w[i] = temp;
//                 int temp1 = profit[j];
//                 profit[j] = profit[i];
//                 profit[i] = temp1;
//                 int temp2 = weight[j];
//                 weight[j] = weight[i];
//                 weight[i] = temp2;
//             }
//         }
//     }
//     cout << "--After Arranging--";
//     cout << endl;
//     cout << "Profit ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << profit[i] << "    ";
//     }
//     cout << endl;
//     cout << "Weight ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << weight[i] << "    ";
//     }
//     cout << endl;
//     cout << "P_W(P/W) ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << p_w[i] << "    ";
//     }
//     cout << "THE MAXIMUM PROFIT IS: " << knapsack(weight, profit, n, maxweight);
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> weight;
    vector<int> value;
    int w, v;
    for (int i = 0; i < n; i++)
    {
        cin >> v >> w;
        weight.push_back(w);
        value.push_back(v);
    }
    vector<vector<int>> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back({(double)value[i] / (double)weight[i], i});
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (weight[temp[i][1]] <= target)
        {
            target -= weight[temp[i][1]];
            ans += value[temp[i][1]];
        }
        else
        {
            ans += value[temp[i][1]] * ((double)target / (double)weight[temp[i][1]]);
            break;
        }
    }
   
}