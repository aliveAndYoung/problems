// by LIFECOULDBEDREAM
// 2026/06/06 14:11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i].first >> _v[i].second;
    sort(_v.begin(), _v.end());
    int l = 0, sum = 0, ans = -1;
    sum = sum + _v[0].second;
    ans = sum;
    for (int r = 1; r < n; r++)
    {
        while (_v[r].first - _v[l].first >= d)
            sum = sum - _v[l].second, l++;
        sum = sum + _v[r].second, ans = max(sum, ans);
    }
    cout << ans;

    return 0;
}