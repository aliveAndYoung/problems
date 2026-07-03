// by LIFECOULDBEDREAM
// 2026/07/02 17:58

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    vector<int> _v;

    int refr;
    while (q--)
    {
        int a, b;

        cin >> a >> b;
        if (a == 1)
            _v.push_back(b);
        else
        {
            refr = b;
            sort(_v.begin(), _v.end(), [&](int a, int b)
                 { return (a & refr) > (b & refr); });
            cout << (_v[0] & refr) << '\n';
        }
    }
    return 0;
}