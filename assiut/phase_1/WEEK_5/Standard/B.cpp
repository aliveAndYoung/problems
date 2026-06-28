// by LIFECOULDBEDREAM
// 2026/06/28 13:12

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, a;
    cin >> q >> n;
    int bit;
    while (q--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> a;
            bit = (n >> a) & 1;
            cout << bit << '\n';
        }
        else if (a == 2)
        {
            cin >> a;
            bit = 1 << a;
            n = n | bit;
            cout << n << '\n';
        }
        else if (a == 3)
        {
            cin >> a;
            bit = 1 << a;
            bit = ~bit;
            n = n & bit;
            cout << n << '\n';
        }
        else
        {
            cin >> a;
            bit = 1 << a;
            n = n ^ bit;
            cout << n << '\n';
        }
    }

    return 0;
}