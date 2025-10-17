// by LIFECOULDBEDREAM
// 2025/07/07 18:02

#include <bits/stdc++.h>
using namespace std;
void MY_SOL(int node, vector<pair<int, int>> &tracker, vector<int> &global_is_visited, int is_visited_index)
{
    // vector<int> lvl((1e5) + 2, 0);
    // vector<bool> isVisited((1e5) + 2, false);
    queue<pair<int, int>> myQ; // node, lvl
    global_is_visited[node] = is_visited_index;
    tracker[node].first += 1;
    myQ.push({node, 0});
    while (!myQ.empty())
    {
        pair<int, int> curr = myQ.front();
        myQ.pop();
        int x = floor(curr.first / 2), y = curr.first * 2;
        if (x > 0 && (global_is_visited[x] != is_visited_index))
        {
            global_is_visited[x] = is_visited_index;
            tracker[x] = {tracker[x].first + 1, tracker[x].second + curr.second + 1};
            myQ.push({x, curr.second + 1});
        }
        if (y <= 1e5 && (global_is_visited[y] != is_visited_index))
        {
            global_is_visited[y] = is_visited_index;
            tracker[y] = {tracker[y].first + 1, tracker[y].second + curr.second + 1};
            myQ.push({y, curr.second + 1});
        }
    }
    // for (int i = 1; i <= 1e5; i++)
    // {
    // tracker[i] = {tracker[i].first + (isVisited[i]), tracker[i].second + lvl[i]};
    // }
};
int main()
{
    int n;
    cin >> n;
    vector<int> chem(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> chem[i];
    }
    vector<pair<int, int>> tracker(1e5 + 2, pair<int, int>{0, 0});
    vector<int> global_is_visited(1e5 + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        MY_SOL(chem[i], tracker, global_is_visited, i);
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