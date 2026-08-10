// by LIFECOULDBEDREAM
// 2026/08/10 04:21

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
void solve(int _n, int curr)
{
    cout << curr << '\n';
    if (curr == _n)
        return;
    solve(_n, ++curr);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve(n, 1);

    return 0;
}