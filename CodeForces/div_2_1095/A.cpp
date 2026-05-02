// by LIFECOULDBEDREAM
// 2026/04/28 17:39

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int n, temp, ans;
    while (t--)
    {
        cin >> n;
        ans = 0;
        vector<int> _v(n);
        for (int i = 0; i < n; i++)
            cin >> _v[i];

        temp = _v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (_v[i] <= _v[i + 1])
            {
                temp = (temp * _v[i]) % 676767677;
            }
            else
            {
                ans = (ans + temp) % 676767677;
                temp = _v[i];
            }
        }
        ans = (ans + temp) % 676767677;
        cout << ans << '\n';
    }

    return 0;
}