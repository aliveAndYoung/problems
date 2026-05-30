// by LIFECOULDBEDREAM
// 2026/05/30 17:19

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    multiset<ll> _left;
    multiset<ll> _right;
    vector<pair<ll, ll>> _v;
    ll l, r;
    for (ll i = 0; i < n; i++)
    {
        cin >> l >> r;
        _left.insert(l);
        _right.insert(r);
        _v.push_back({l, r});
    }
    ll maxx = -1;
    for (auto it = _v.begin(); it != _v.end(); it++)
    {
        l = it->first;
        r = it->second;
        _left.erase(_left.find(l));
        _right.erase(_right.find(r));
        maxx = max(maxx, ll(*_right.begin() - *_left.rbegin()));
        _left.insert(l);
        _right.insert(r);
    }
    maxx = (maxx > 0) ? maxx : 0;
    cout << maxx << '\n';
    return 0;
}