#include <bits/stdc++.h>
using namespace std;
const int n = 6;
void dijkstra(int edges[][n], int vertices, int edge, int source)
{
    bool visited[n];
    int distance[n];
    int parent[n];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
        distance[i] = INT16_MAX;
        parent[i] = i;
    }
    distance[source] = 0;
    int v = 0;
    for (int i = 0; i < vertices; i++)
    {
        int min_distance = INT_MAX;
        for (int j = 0; j < vertices; j++)
        {
            if ((distance[j] < min_distance) && !visited[j])
            {
                min_distance = distance[j];
                v = j;
            }
        }
        visited[v] = true;
        for (int j = 0; j < vertices; j++)
        {
            if (edges[v][j] != 0 && !visited[j])
            {
                int path_cost = distance[v] + edges[v][j];
                if (path_cost < distance[j])
                {
                    distance[j] = path_cost;
                    parent[j] = v;
                }
            }
        }
    }
    int i = source;
    for (int j = 1; j < vertices; j++)
    {
        int k = j;
        while (parent[j] != j)
        {
            cout << j << " ";
            j = parent[j];
        }
        cout << i << endl;
        j = k;
    }
}
int main()
{
    int e;
    cout << "Enter the no of edges: ";
    cin >> e;
    int edges[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        edges[s][d] = w;
    }
    int src;
    cout << "Enter the source vertex: ";
    cin >> src;
    dijkstra(edges, n, e, src);
    return 0;
}