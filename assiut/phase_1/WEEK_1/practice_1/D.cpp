// by LIFECOULDBEDREAM
// 2026/02/27 01:51

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 0;
        return 0;
    }
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];

    sort(_v.begin(), _v.end());
    if (_v[n - 2] - _v[0] < _v[n - 1] - _v[1])
        cout << _v[n - 2] - _v[0];
    else
        cout << _v[n - 1] - _v[1];
    return 0;
}