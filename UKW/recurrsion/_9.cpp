// by LIFECOULDBEDREAM
// 2026/08/10 06:17

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
bool solve(vector<int> &_v, int f, int b)
{
    if (f >= b)
        return true;
    if (_v[f] == _v[b])
        return solve(_v, f + 1, b - 1);
    return false;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (solve(v, 0, n - 1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}