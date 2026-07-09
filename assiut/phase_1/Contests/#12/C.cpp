// by LIFECOULDBEDREAM
// 2026/07/09 09:05

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _v(n);
    char curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        _v[i] = curr - 'a';
    }
    for (int i = 1; i < n; i++)
        if (_v[i] < _v[i - 1])
        {
            cout << "YES\n"
                 << i << ' ' << i + 1;
            return 0;
        }

    cout << "NO";

    return 0;
}