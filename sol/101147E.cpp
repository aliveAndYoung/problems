#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> d(N);
        for (int i = 0; i < N; i++)
            cin >> d[i];

        // Build reversed adjacency list
        vector<vector<int>> adj(N);
        for (int i = 0; i < N; i++)
        {
            if (i + d[i] < N)
            {
                adj[i + d[i]].push_back(i);
            }
            if (i - d[i] >= 0)
            {
                adj[i - d[i]].push_back(i);
            }
        }

        // BFS from N-1
        vector<int> distancess(N, -1);
        queue<pair<int, int>> myQ;
        myQ.push({N - 1, 0});
        distancess[N - 1] = 0;
        while (!myQ.empty())
        {
            pair<int, int> curr = myQ.front();
            myQ.pop();
            for (int i = 0; i < adj[curr.first].size(); i++)
            {
                if (distancess[adj[curr.first][i]] == -1)
                {
                    distancess[adj[curr.first][i]] = curr.second + 1;
                    myQ.push({adj[curr.first][i], curr.second + 1});
                }
            }
        }

        // Output distances from each shop
        for (int i = 0; i < N; i++)
            cout << distancess[i] << "\n";
    }
    return 0;
}