// by LIFECOULDBEDREAM
// 2026/02/11 03:07

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n < 6)
    {
        cout << "0\n";
        return 0;
    }
    int ans = 0;
    for (int i = 6; i <= n; i++)
    {
        int p = i;
        int count = 0;
        for (int _i = 2; _i * _i <= p; _i++)
        {
            if (p % _i == 0)
            {
                count++;
                while (p % _i == 0)
                    p /= _i;
            }
        }
        if (p != 1)
            count++;
        if (count == 2)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}