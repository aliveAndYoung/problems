// by LIFECOULDBEDREAM
// 2026/03/17 21:20

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string _s;
    cin >> _s;
    map<char, ll> _mp;
    for (char c : _s)
        _mp[c]++;
    multiset<ll> _Mset;
    set<ll> _set;
    for (auto p : _mp)
    {
        _set.insert(p.second);
        _Mset.insert(p.second);
    }
    if (_set.size() > 2)
        cout << "NO\n";
    else if (_set.size() == 1)
        cout << "YES\n";
    else
    {
        auto it = _set.begin();
        ll first = *it;
        ll second = *next(it);

        if (
            ((first == 1 && _Mset.count(first) == 1) || (second == 1 && _Mset.count(second) == 1)) ||
            (second == first + 1 && _Mset.count(second) == 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
