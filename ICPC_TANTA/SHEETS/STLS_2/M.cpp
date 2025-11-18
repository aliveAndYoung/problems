// by LIFECOULDBEDREAM
// 2025/11/18 23:27

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    int lastDay = 0;
    for (auto &pr : v)
    {
        if (pr.second >= lastDay)
        {
            lastDay = pr.second;
        }
        else
        {
            lastDay = pr.first;
        }
    }
    cout << lastDay;

    return 0;
}