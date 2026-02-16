// by LIFECOULDBEDREAM
// 2026/02/16 23:35

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    set<int> s;
    int curr;
    int y = -0x7fffffff, x = -0x7fffffff;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        mp[curr]++, s.insert(curr);
        y = max(y, curr);
    }
    for (int _s : s)
    {
        if (y % _s == 0)
            mp[_s]--;
    }
    for (auto [a, b] : mp)
    {
        if (b > 0)
            x = max(x, a);
    }
    cout << y << ' ' << x;

    return 0;
}