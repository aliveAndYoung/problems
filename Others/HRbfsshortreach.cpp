#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int n, int m, vector<vector<int>> edges, int s)
{
    vector<vector<int>> adjacencyArr(n);
    for (auto edg : edges)
    {
        adjacencyArr[edg[0] - 1].push_back(edg[1] - 1);
        adjacencyArr[edg[1] - 1].push_back(edg[0] - 1);
    }
    vector<int> distances(n, -1);
    queue<pair<int, int>> myQ;
    myQ.push({s - 1, 0});
    distances[s - 1] = 0;
    while (!myQ.empty())
    {
        pair<int, int> curr = myQ.front();
        myQ.pop();
        for (int node : adjacencyArr[curr.first])
        {
            if (distances[node] == -1)
            {
                myQ.push({node, curr.second + 1});
                distances[node] = curr.second + 1;
            }
        }
    }
    vector<int> newDis;
    for (int dis : distances)
    {
        if (dis == -1)
            newDis.push_back(dis);
        else if (dis == 0)
            continue;
        else
            newDis.push_back(dis * 6);
    }

    return newDis;
};

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edgs;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            vector<int> edg = {a, b};
            edgs.push_back(edg);
        }
        int start;
        cin >> start;

        vector<int> ans = BFS(n, m, edgs, start);

        for (int dis : ans)
        {
            if (dis == -1)
                cout << dis << " ";
            else if (dis == 0)
                continue;
            else
                cout << dis * 6 << " ";
        }
        cout << "\n";
    }
    return 0;
}