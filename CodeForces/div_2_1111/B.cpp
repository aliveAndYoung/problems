// by LIFECOULDBEDREAM
// 2026/07/18 17:50

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
        int n, m, k;
        cin >> n >> k >> m;
        if (k > m)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            vector<int> _v(k);
            _v[0] = m - (k - 1);
            for (int i = 1; i < k; i++)
                _v[i] = 1;
            int count = 0, index = 0;
            while (n--)
            {
                cout << _v[index % k] << ' ';
                _v[index % k] = _v[index % k] + m;
                index++;
            }
        }
        cout << "\n";
    }

    return 0;
}