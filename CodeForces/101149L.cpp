// by LIFECOULDBEDREAM
// 2025/07/06 20:23

#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int start, vector<vector<int>> &edges)
{

    int N = edges.size();
    vector<int> distances(N, 1e7);
    distances[start] = 0;

    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        int cost = distances[node];

        for (int i = 0; i < edges[node].size(); i++)
        {
            int child = edges[node][i];

            if (distances[child] != 1e7)
                continue;

            q.push(child);
            distances[child] = cost + 1;
        }
    }

    return distances;
}
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<vector<int>> adj(n + 2);
    vector<vector<int>> rev_adj(n + 2);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        rev_adj[y].push_back(x);
        adj[x].push_back(y);
    }
    vector<int> distanceFromZero = BFS(0, adj);
    vector<int> distanceToA = BFS(a, rev_adj);
    vector<int> distanceToB = BFS(b, rev_adj);
    int ans = 1e7;
    for (int u = 0; u <= n; u++)
        ans = min(ans, distanceFromZero[u] + distanceToA[u] + distanceToB[u]);

    cout << ans;

    return 0;
}