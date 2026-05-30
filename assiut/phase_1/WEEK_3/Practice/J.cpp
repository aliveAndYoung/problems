// by LIFECOULDBEDREAM
// 2026/05/29 09:58

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool my_custom_greater(pair<ll, string> a, pair<ll, string> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    map<string, ll> _mp;
    string curr;
    ll pts, cntst;
    while (n--)
    {
        cin >> cntst;
        pts = 1000;
        while (cntst--)
        {
            cin >> curr;
            _mp[curr] += pts;
            pts = (ll)round(pts * 0.9);
        }
    }
    vector<pair<ll, string>> _v;
    for (auto it : _mp)
        _v.push_back({it.second, it.first});

    sort(_v.begin(), _v.end(), my_custom_greater);
    cout << _v[0].second << "\n";
    for (ll i = 0; i < _v.size(); i++)
        cout << _v[i].second << ' ' << _v[i].first << "\n";

    return 0;
}
