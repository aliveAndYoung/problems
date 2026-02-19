// by LIFECOULDBEDREAM
// 2026/02/19 14:24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> _mp;
    string curr_1, curr_2;
    for (int i = 0; i < n; i++)
    {
        cin >> curr_1 >> curr_2;
        _mp[curr_2] = curr_1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> curr_1 >> curr_2;
        cout << curr_1 << ' ' << curr_2 << " #";
        curr_2.pop_back();
        cout << _mp[curr_2] << '\n';
    }

    return 0;
}