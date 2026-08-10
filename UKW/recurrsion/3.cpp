// by LIFECOULDBEDREAM
// 2026/08/10 04:24

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int _n)
{
    if (_n == 1)
        cout << _n;
    else
    {
        cout << _n << ' ';
        solve(--_n);
    }
}
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve(n);
    return 0;
}