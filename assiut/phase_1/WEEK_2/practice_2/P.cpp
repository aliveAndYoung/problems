// by LIFECOULDBEDREAM
// 2026/05/02 23:28

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    deque<ll> _dq;
    ll max = -1, max_index = -1, curr;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        _dq.push_back(curr);
        if (curr > max)
        {
            max = curr;
            max_index = i;
        }
    }

    map<ll, pair<ll, ll>> _mp;
    ll a, b;
    for (ll i = 0; i < max_index ; i++)
    {
        a = _dq.front();
        _dq.pop_front();
        b = _dq.front();
        _dq.pop_front();
        _mp[i] = {a, b};
        if (a > b)
        {
            _dq.push_front(a);
            _dq.push_back(b);
        }
        else
        {
            _dq.push_front(b);
            _dq.push_back(a);
        }
    }

    vector<ll> _v(n - 1);
    _dq.pop_front();
    for (ll i = 0; i < n - 1; i++)
    {
        curr = _dq.front();
        _dq.pop_front();
        _v[i] = curr;
    }

    for (ll i = 0; i < q; i++)
    {
        cin >> curr;
        curr--;
        if (curr < max_index)
        {
            cout << _mp[curr ].first << " " << _mp[curr ].second << '\n';
        }
        else
        {
            curr = curr - max_index;
            curr = curr % (n - 1);
            cout << max << " " << _v[curr] << '\n';
        }
    }

    return 0;
}