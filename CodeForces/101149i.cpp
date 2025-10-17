#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mySquares(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        mySquares[a].push_back(b);
        mySquares[b].push_back(a);
    }
    int leastWatched, ends = (int)1e6;
    for (int i = 0; i < n; i++)
    {
        if (mySquares[i].size() < ends)
        {
            ends = mySquares[i].size();
            leastWatched = i;
        }
    }
    vector<int> answer(n, 1);
    answer[leastWatched] = 0;
    for (int x : mySquares[leastWatched])
        answer[x] = 0;
    for (int i = 0; i < n; i++)
        cout << answer[i] << " ";

    return 0;
}