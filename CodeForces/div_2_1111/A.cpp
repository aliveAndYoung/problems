// by LIFECOULDBEDREAM
// 2026/07/18 17:32

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
        int n;
        cin >> n;
        vector<int> _v(n);
        for (int i = 0; i < n; i++)
            cin >> _v[i];
        if ((n % 2) == 1)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            int pos = 0, neg = 0;
            for (int i = 0; i < n - 1; i = i + 2)
            {
                if (_v[i] + _v[i + 1] == 2)
                    pos++;
                else if (_v[i] + _v[i + 1] == -2)
                    neg++;
            }
            if ((pos + neg) % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}