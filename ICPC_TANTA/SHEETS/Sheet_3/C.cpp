// by LIFECOULDBEDREAM
// 2025/11/19 18:32

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        vector<ll> v(a + 1);
        for (int i = 1; i <= a; i++)
            cin >> v[i];
        for (int i = 2; i <= a; i++)
            v[i] += v[i - 1];
        while (b--)
        {
            ll c, d, e;
            cin >> c >> d >> e;
            ll removed = v[d] - v[c - 1];
            ll annnss = v[a] - removed + (e * (d - c + 1));
            if (annnss % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}