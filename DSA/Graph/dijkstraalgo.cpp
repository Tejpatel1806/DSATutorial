#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> g[N];
void diskstra(int source)
{
    vector<int> dist(N, INF);
    vector<int> visited(N, 0);
    set<pair<int, int>> st; //weighted and node  means weighted na sorting mujab store thase 
    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0)
    {
        auto node = *st.begin();
        int v = node.second;
        int v_weight = node.first;
        st.erase(st.begin());
        if (visited[v])
            continue;
        visited[v] = 1;
        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}
int main()
{
    int n, m; //n=number of veritices,m=number of edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back({y, wt}); //matlab evo thay ke x thi y sudhi edges che ane tenu weighted wt che
    }
}