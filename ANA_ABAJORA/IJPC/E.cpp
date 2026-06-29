// by LIFECOULDBEDREAM
// 2026/06/29 04:01

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<double> _a(3);
    vector<double> _b(3);
    cin >> _a[0] >> _a[1] >> _a[2];
    cin >> _b[0] >> _b[1] >> _b[2];
    sort(_a.begin(), _a.end());
    sort(_b.begin(), _b.end());
    if ((_a[0] / _b[0]) == (_a[1] / _b[1]) && (_a[1] / _b[1]) == (_a[2] / _b[2]))
        cout << "yes";
    else
        cout << "no";
    return 0;
}