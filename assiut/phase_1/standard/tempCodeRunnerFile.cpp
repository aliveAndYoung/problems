// by LIFECOULDBEDREAM
// 2026/03/05 14:52

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int curr;
    for (int i = 1; i <= n; i++)
    {
        cin >> curr;
        mp[curr] = i;
    }
    if (mp.size() < m)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    for (auto it : mp)
        cout << it.second << ' ';
    return 0;
}