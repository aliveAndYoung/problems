// by LIFECOULDBEDREAM
// 2026/06/14 04:59

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    map<int, int> _mp;
    int curr;
    for (int i = 0; i < n; i++)
        cin >> curr, _mp[curr]++;
    vector<int> _v;
    for (auto const &[key, val] : _mp)
        _v.push_back(val);
    int l, r, mid, a, b, c = 0;
    l = 1;
    r = n;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        a = 0;
        b = 0;
        for (int i = 0; i < (int)_v.size(); i++)
        {
            b = _v[i] / mid;
            a += b;
        }
        if (a < k)
            r = mid - 1;
        else
            l = mid + 1, c = max(c, mid);
    }
    l = 0;
    for (auto [key, val] : _mp)
    {
        a = key;
        b = val;
        while (b >= c)
        {
            cout << a << " ";
            l++;
            if (l == k)
                return 0;
            b = b - c;
        }
    }

    return 0;
}