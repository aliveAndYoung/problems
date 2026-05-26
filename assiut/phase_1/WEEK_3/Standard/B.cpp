// by LIFECOULDBEDREAM
// 2026/05/26 04:13

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    string name;
    ll curr;
    map<string, ll> _mp;
    while (n--)
    {
        cin >> name >> curr;
        _mp[name] = curr;
    }
    while (q--)
    {
        cin >> curr;
        if (curr == 1)
        {
            cin >> name >> curr;
            _mp[name] += curr;
        }
        else
        {
            cin >> name;
            cout << _mp[name] << "\n";
        }
    }

    return 0;
}