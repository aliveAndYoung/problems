// by LIFECOULDBEDREAM
// 2026/02/25 19:09

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> _v(n); // {  found  ,  needed  }
    for (int i = 0; i < n; i++)
        cin >> _v[i].second;
    for (int i = 0; i < n; i++)
        cin >> _v[i].first;
    int ans = 0x7fffffff;
    for (int i = 0; i < n; i++)
        ans = min(ans, _v[i].first / _v[i].second);
    for (int i = 0; i < n; i++)
        _v[i].first -= ans * _v[i].second;
    while (m)
    {
        sort(_v.begin(), _v.end());
        for (int i = 0; i < n; i++)
        {
            if (_v[i].first < _v[i].second)
            {
                if (_v[i].first + m >= _v[i].second)
                {
                    m = m - (_v[i].second - _v[i].first);
                    _v[i].first = 0;
                }
                else
                {
                    cout << ans;
                    return 0;
                }
            }
            else
                _v[i].first -= _v[i].second;
        }
        ans++;
    }
    cout << ans;

    return 0;
}