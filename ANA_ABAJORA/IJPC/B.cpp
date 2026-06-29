// by LIFECOULDBEDREAM
// 2026/06/29 01:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        int temp = 0;
        vector<int> _v(m);
        for (int i = 0; i < m; i++)
            cin >> _v[i], temp = temp ^ _v[i];
        int one, two, three;
        one = _v[m - 2];
        two = _v[m - 1];
        three = one ^ two;
        n = n - m;
        n = n % 3;
        if (n == 0)
            cout << ( temp) << '\n';
        if (n == 1)
            cout << (three ^ temp) << '\n';
        if (n == 2)
            cout << (two ^ temp) << '\n';
    }

    return 0;
}