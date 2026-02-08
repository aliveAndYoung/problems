// by LIFECOULDBEDREAM
// 2026/02/08 21:15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int new_left, new_right;
        if (abs(l) >= m)
        {
            new_left = -m;
            new_right = 0;
        }
        else
        {
            new_left = l;
            new_right = m - abs(l);
        }
        cout << new_left << ' ' << new_right << '\n';
    }

    return 0;
}