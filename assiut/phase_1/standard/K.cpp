// by LIFECOULDBEDREAM
// 2026/03/04 20:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, vector<string>> _mp;
    string _n;
    int _s;
    while (n--)
    {
        cin >> _n >> _s;
        _mp[_s].push_back(_n);
    }
    for (auto it = _mp.rbegin(); it != _mp.rend(); ++it)
        for (string s : it->second)
            cout << s << ' ' << it->first << '\n';
    return 0;
}