// by LIFECOULDBEDREAM
// 2026/07/08 08:37

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<int, set<int>> _mp;
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        _mp[a].insert(b);
        _mp[b].insert(a);
    }
    bool flag = true;
    int cnt = 0;
    while (flag)
    {
        flag = false;
        vector<pair<int, int>> cut;
        for (auto it = _mp.begin(); it != _mp.end(); it++)
        {
            if (it->second.size() == 1)
                cut.push_back({it->first, *it->second.begin()}), flag = true;
        }
        if (flag)
            cnt++;
        for (int i = 0; i < cut.size(); i++)
        {
            a = cut[i].first;
            b = cut[i].second;
            _mp[a].erase(b);
            _mp[b].erase(a);
        }
    }
    cout << cnt;

    return 0;
}