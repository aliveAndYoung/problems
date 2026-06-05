// by LIFECOULDBEDREAM
// 2026/05/31 20:13

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    vector<pair<ll, ll>> _v(n);
    for (ll i = 0; i < n; i++)
        cin >> _v[i].first >> _v[i].second;
    sort(_v.begin(), _v.end());
    string _que;
    ll l, r, mid, hold;
    ll s1, s2;
    pair<ll, ll> ans;
    for (ll i = 0; i < q; i++)
    {
        cin >> _que;
        cin >> s1 >> s2;
        l = 0;
        r = n - 1;
        ans = {-1, -1};
        if (_que == "lower")
        {
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (_v[mid] < pair{s1, s2})
                {
                    ans = _v[mid], l = mid + 1;
                    hold = mid;
                }
                else
                    r = mid - 1;
            }
            if ((ans == pair{l - 1ll, -1ll}))
                cout << -1 << '\n';
            else
                cout << hold << '\n';
        }
        else if (_que == "upper")
        {
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (_v[mid] > pair{s1, s2})
                {
                    ans = _v[mid], r = mid - 1;
                    hold = mid;
                }
                else
                    l = mid + 1;
            }
            if ((ans == pair{-1ll, -1ll}))
                cout << -1 << '\n';
            else
                cout << hold << '\n';
        }
        else
        {
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (_v[mid] == pair{s1, s2})
                    ans = pair{0, 0};
                else if (_v[mid] > pair{s1, s2})
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            if (ans == pair{-1ll, -1ll})
                cout << "not found\n";
            else
                cout << "found \n ";
        }
    }

    return 0;
}