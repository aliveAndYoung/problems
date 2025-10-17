// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, bool>> nodes(n + 9);
//     vector<vector<int>> adj(n + 9);
//     for (int i = 1; i <= n; i++)
//     {
//         int jmp;
//         cin >> jmp;
//         nodes[i] = {i, (jmp % 2 != 0)};
//         if (i - jmp > 0)
//             adj[i].push_back(i - jmp);
//         if (i + jmp < n + 1)
//             adj[i].push_back(i + jmp);
//     }

//     vector<int> distances(n + 9, 1e6);
//     for (int w = 1; w <= n; w++)
//     {
//         vector<bool> isVisited(n + 2, false);
//         queue<pair<int, int>> myQ;
//         myQ.push({w, 0});

//         while (!myQ.empty())
//         {
//             pair<int, int> curr = myQ.front();
//             myQ.pop();
//             if (nodes[w].second != nodes[curr.first].second)
//             {
//                 distances[w] = min(curr.second, distances[w]);

//                 break;
//             }
//             else
//             {
//                 for (int p = 0; p < adj[curr.first].size(); p++)
//                 {
//                     if (isVisited[adj[curr.first][p]] == false)
//                     {
//                         myQ.push({adj[curr.first][p], curr.second + 1});
//                         isVisited[adj[curr.first][p]] = true;
//                     }
//                 }
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (distances[i] == 1e6)
//             cout << -1 << " ";
//         else
//             cout << distances[i] << " ";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> jmp(n + 1);
    vector<int> parity(n + 1);
    vector<vector<int>> rev_adj(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> jmp[i];
        parity[i] = jmp[i] % 2;

        if (i - jmp[i] > 0)
            rev_adj[i - jmp[i]].push_back(i);
        if (i + jmp[i] <= n)
            rev_adj[i + jmp[i]].push_back(i);
    }

    vector<int> ans(n + 1, -1);

    for (int p = 0; p <= 1; p++)
    {
        queue<int> q;
        vector<int> dist(n + 1, -1);

        for (int i = 1; i <= n; i++)
        {
            if (parity[i] != p)
            {
                dist[i] = 0;
                q.push(i);
            }
        }

        // BFS
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (int neighbor : rev_adj[node])
            {
                if (dist[neighbor] == -1)
                {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (parity[i] == p && dist[i] != -1)
                ans[i] = dist[i];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
