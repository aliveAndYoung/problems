// by LIFECOULDBEDREAM
// 2026/06/19 20:28

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

        int a, b;
        cin >> a >> b;
        vector<int> _a(a), _b(b);
        for (int i = 0; i < a; i++)
            cin >> _a[i];
        for (int i = 0; i < b; i++)
            cin >> _b[i];
        sort(_a.begin(), _a.end());
        sort(_b.begin(), _b.end());
        a = 0, b = 0;
        int count = 0;
        while (a < _a.size() && b < _b.size())
            if (_a[a] >= _b[b])
                count++, a++, b++;
            else
                a++;
        cout << count << '\n';
    }

    return 0;
}