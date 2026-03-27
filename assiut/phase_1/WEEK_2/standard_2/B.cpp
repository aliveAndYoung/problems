// by LIFECOULDBEDREAM
// 2026/03/19 02:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    vector<ll> _v(n + 1, 0);
    for (ll i = 1; i <= n; i++)
        cin >> _v[i];
    sort(_v.begin(), _v.end());
    string query;
    ll curr, l, r, m, ans;

    while (q--)
    {
        cin >> query >> curr;
        l = 1;
        r = n;
        m = l + (r - l) / 2;
        ans = -1;
        if (query == "binary_search")
        {
            while (l <= r)
            {
                m = l + (r - l) / 2;
                if (_v[m] == curr)
                {
                    ans = m;
                    break;
                }
                if (_v[m] > curr)
                {
                    r = m - 1;
                }
                if (_v[m] < curr)
                {
                    l = m + 1;
                }
            }
            if (ans != -1)
                cout << "found\n";
            else
                cout << "not found\n";
        }
        else if (query == "lower_bound")
        {
            while (l <= r)
            {
                m = l + (r - l) / 2;
                if (_v[m] >= curr)
                {
                    ans = m;
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            if (ans != -1)
                cout << _v[ans] << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            while (l <= r)
            {
                m = l + (r - l) / 2;
                if (_v[m] > curr)
                {
                    ans = m;
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            if (ans != -1)
                cout << _v[ans] << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}