// by LIFECOULDBEDREAM
// 2026/06/19 19:56

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, int> _mp;
    int n;
    cin >> n;
    char curr;
    while (n--)
    {
        cin >> curr;
        _mp[curr]++;
    }
    _mp['y'] = _mp['y'] / 2;
    _mp['a'] = _mp['a'] / 2;
    int minn = 0x7ffffffff;
    minn = min(minn, _mp['A']);
    minn = min(minn, _mp['n']);
    minn = min(minn, _mp['d']);
    minn = min(minn, _mp['a']);
    minn = min(minn, _mp['r']);
    minn = min(minn, _mp['y']);
    cout << minn;

    return 0;
}