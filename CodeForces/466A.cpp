// by LIFECOULDBEDREAM
// 2026/02/19 23:05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b, ans = 0;
    cin >> n >> m >> a >> b;
    if (m * a >= b)
    {
        ans = (n / m) * b;
        if (n % m != 0)
            ans += min(b, a * (n % m));
    }
    else
    {
        ans = n * a;
    }
    cout << ans;
    return 0;
}