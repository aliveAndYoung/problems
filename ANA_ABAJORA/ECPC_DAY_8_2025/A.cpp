// by LIFECOULDBEDREAM
// 2026/07/02 18:24

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> _v(n);
    int time = 0;
    for (int i = 0; i < n; i++)
        cin >> _v[i].first;
    for (int i = 0; i < n; i++)
        cin >> _v[i].second;

    sort(_v.begin(), _v.end());

    for (int i = 0; i < n; i++)
    {
        if (_v[i].second - time > 0)
            time = _v[i].second;
        time++;
    }
    cout << time;

    return 0;
}