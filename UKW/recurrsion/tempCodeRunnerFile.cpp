// by LIFECOULDBEDREAM
// 2026/08/10 04:30

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
int solve(int _n)
{
    if (_n == 1)
        return 1;
    else
        return (_n * solve(_n - 1));
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