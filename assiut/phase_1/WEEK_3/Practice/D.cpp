// by LIFECOULDBEDREAM
// 2026/05/28 12:56

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    set<ll> _s;
    ll curr, count = 0;
    while (n--)
    {
        cin >> curr;
        _s.insert(curr);
    }
    while (m--)
    {

        cin >> curr;
        if (_s.count(curr) > 0)
            count++;
    }
    cout << count << "\n";

    return 0;
}