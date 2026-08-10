// by LIFECOULDBEDREAM
// 2026/08/10 04:30

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
map<int, int> _mp;
int solve(int _n)
{
    if (_n == 2 || _n == 1)
        return _n - 1;
    int a = _mp[_n - 1] ? _mp[_n - 1] : solve(_n - 1);
    int b = _mp[_n - 2] ? _mp[_n - 2] : solve(_n - 2);
    _mp[_n - 1] = a;
    _mp[_n - 2] = b;
    return a + b;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(n);

    return 0;
}