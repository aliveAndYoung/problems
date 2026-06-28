// by LIFECOULDBEDREAM
// 2026/06/28 13:07

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> q >> n;
    int a;
    while (q--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> a;
            n = n | a;
        }
        else if (a == 2)
        {
            cin >> a;
            n = n & a;
        }
        else if (a == 3)
        {
            cin >> a;
            n = n ^ a;
        }
        else
        {
            n = ~n;
        }
        cout << n << '\n';
    }

    return 0;
}