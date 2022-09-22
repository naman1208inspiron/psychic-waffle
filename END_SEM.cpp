#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int multiStageGraph(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> cost(n, INT_MAX);
    cost[n - 1] = 0;
    for (int i = n - 2; i > 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            if (graph[i][j] != INT_MAX)
            {
                cost[i] = min(cost[i], graph[i][j] + cost[j]);
            }
        }
    }
    return cost[1];
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, INT_MAX));
    for (int i = 0; i < e; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1][v2] = wt;
    }
    int cost = multiStageGraph(graph);
    cout << "the minimum path cost is " << cost << endl;
}