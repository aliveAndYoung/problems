// by LIFECOULDBEDREAM
// 2026/04/07 18:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> _v(n);
    for (ll i = 0; i < n; i++)
        cin >> _v[i].first >> _v[i].second;
    sort(_v.begin(), _v.end());
    vector<pair<ll, ll>> groups;
    groups.push_back(_v[0]);
    for (ll i = 1; i < n; i++)
    {
        if (_v[i].first <= groups.back().second)
            groups.back().second = max(groups.back().second, _v[i].second);
        else
            groups.push_back(_v[i]);
    }
    sort(groups.begin(), groups.end());
    ll q, a, b;
    cin >> q;
    ll l, r, mid;
    for (ll i = 0; i < q; i++)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        l = 0, r = groups.size() - 1;
        bool flag = true;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (groups[mid].first <= a && groups[mid].second >= b)
            {
                cout << "YES\n";
                flag = false;
                break;
            }
            else if (groups[mid].first > a)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (flag)
            cout << "NO\n";
    }

    return 0;
}