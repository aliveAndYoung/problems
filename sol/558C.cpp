// by LIFECOULDBEDREAM
// 2025/07/07 18:02

#include <bits/stdc++.h>
using namespace std;
void MY_SOL(int node, vector<pair<int, int>> &tracker)
{
    vector<int> lvl((1e5) + 2, 0);
    vector<bool> isVisited((1e5) + 2, false);
    queue<int> myQ;
    isVisited[node] = true;
    myQ.push(node);
    while (!myQ.empty())
    {
        int curr = myQ.front();
        myQ.pop();
        int x = floor(curr / 2), y = curr * 2;
        if (x > 0 && !isVisited[x])
        {
            lvl[x] = lvl[curr] + 1;
            isVisited[x] = true;
            myQ.push(x);
        }
        if (y < 1e5 && !isVisited[y])
        {
            lvl[y] = lvl[curr] + 1;
            isVisited[y] = true;
            myQ.push(y);
        }
    }
    for (int i = 1; i <= 1e5; i++)
    {
        tracker[i] = {tracker[i].first + (isVisited[i]), tracker[i].second + lvl[i]};
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> chem(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >>chem[i];
    }
    vector<pair<int, int>> tracker(1e5+2, pair<int, int>{0, 0});
    for (int i = 1; i <= n; i++)
    {
        MY_SOL(chem[i], tracker);
    }
    int sol = 1e7;
    for (pair<int, int> checking : tracker)
    {
        if (checking.first == n)
        {
            sol = min(sol, checking.second);
        }
    }
    cout << sol;

    return 0;
}