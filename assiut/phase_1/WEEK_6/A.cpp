// by LIFECOULDBEDREAM
// 2026/07/08 06:33

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    vector<int> _v(a);
    for (int i = 0; i < a; i++)
        cin >> _v[i];
    sort(_v.rbegin(), _v.rend());
    for (int it : _v)
    {
        if (b % it == 0)
        {
            cout << b / it << "\n";
            return 0;
        }
    }
    return 0;
}