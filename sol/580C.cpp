#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> hasCat(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> hasCat[i];
    vector<vector<int>> adj(n + 2);
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<pair<int, int>> myQ;
    myQ.push({1, hasCat[1]});
    int count = 0;
    vector<int> isVisited(n + 2, 0);
    isVisited[1] = 1;
    while (!myQ.empty())
    {
        pair<int, int> curr = myQ.front();
        myQ.pop();
        if (curr.second > m)
            continue;
        if (adj[curr.first].size() > 1)
        {
            for (int p : adj[curr.first])
            {
                if (isVisited[p] == 0)
                {
                    isVisited[p] = 1;
                    if (hasCat[p])
                        myQ.push({p, curr.second + hasCat[p]});
                    else
                        myQ.push({p, 0});
                }
            }
        }
        else
        {
            if (isVisited[adj[curr.first][0]] != 0)
                count++;
            else
            {
                isVisited[adj[curr.first][0]] = 1;
                myQ.push({adj[curr.first][0], curr.second + hasCat[adj[curr.first][0]]});
            }
        }
    }
    cout << count;

    return 0;
}