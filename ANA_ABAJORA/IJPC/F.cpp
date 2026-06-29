// by LIFECOULDBEDREAM
// 2026/06/29 04:48

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
        int n, m;
        cin >> n >> m;
        vector<int> _a(n), _b(n);
        for (int i = 0; i < n; i++)
            cin >> _a[i];
        for (int i = 0; i < n; i++)
            cin >> _b[i];
        vector<map<int, int>> _mps(m);
        for (int i = 0; i < n; i++)
            _mps[i % m][_a[i]]++;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (_mps[i % m][_b[i]] == 0)
            {
                flag = false;
                break;
            }
            else
                _mps[i % m][_b[i]]--;
        }
        if (flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}