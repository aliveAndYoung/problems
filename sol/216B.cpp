// by LIFECOULDBEDREAM
// 2025/07/12 23:53

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_list(n);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a - 1].push_back(b - 1);
        adj_list[b - 1].push_back(a - 1);
    }
    int count = 0; // ans
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        stack<pair<int, int>> myStack;
        myStack.push({i, 0});
        while (!myStack.empty())
        {
            pair<int, int> curr = myStack.top();
            myStack.pop();
            if (visited[curr.first])
                break;

            visited[curr.first] = true;
            int skipped = 0;
            for (int j = 0; j < adj_list[curr.first].size(); j++)
            {
                if (visited[adj_list[curr.first][j]])
                {
                    skipped++;
                    continue;
                }
                myStack.push({adj_list[curr.first][j], curr.second + 1});
            }
            if (skipped == 2)
            {
                count += ((curr.second + 1) % 2 != 0);
            }
        }
    }
    int ans = count +
              (int)((n - count) % 2 != 0);
    cout << ans;

    return 0;
}