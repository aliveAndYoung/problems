// by LIFECOULDBEDREAM
// 2025/11/19 00:15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n;
    cin >> n;
    map<string, int> points;
    string x, y, action, dummy;
    while (n--)
    {
        cin >> x >> action;
        if (action == "posted")
        {
            cin >> dummy >> y;
            y.pop_back();
            y.pop_back();
            cin >> dummy;
            if (x == s)
                points[y] += 3;
            else if (y == s)
                points[x] += 3;
            else
            {
                points[x] += 0;
                points[y] += 0;
            }
        }
        if (action == "commented")
        {
            cin >> dummy >> y;
            y.pop_back();
            y.pop_back();
            cin >> dummy;
            if (x == s)
                points[y] += 2;
            else if (y == s)
                points[x] += 2;
            else
            {
                points[x] += 0;
                points[y] += 0;
            }
        }
        if (action == "likes")
        {
            cin >> y;
            y.pop_back();
            y.pop_back();
            if (x == s)
                points[y] += 1;
            else if (y == s)
                points[x] += 1;
            else
            {
                points[y] += 0;
                points[x] += 0;
            }
            cin >> dummy;
        }
    }
    vector<pair<int, string>> ranking;
    for (auto &pr : points)
    {
        ranking.push_back({-pr.second, pr.first});
    }
    sort(ranking.begin(), ranking.end());
    for (auto &pr : ranking)
    {
        cout << pr.second << "\n";
    }

    return 0;
}