// by LIFECOULDBEDREAM
// 2026/02/28 15:47

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, int> _m;
    string s;
    cin >> s;
    for (char c : s)
        _m[c]++;
    for (auto it : _m)
        cout << it.first << " " << it.second << '\n';

    return 0;
}