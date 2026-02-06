// by LIFECOULDBEDREAM
// 2026/02/04 00:57

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> n;
        if (n % 2 != 0)
            cout << x << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}