// by LIFECOULDBEDREAM
// 2026/07/01 08:48

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
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    int mask = 0, sum;
    while (mask < (1 << n))
    {
        sum = 0;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
                sum = sum + _v[i];
            else
                sum = sum - _v[i];
        if (sum % 360 == 0)
        {
            cout << "YES";
            return 0;
        }
        mask++;
    }
    cout << "NO";

    return 0;
}