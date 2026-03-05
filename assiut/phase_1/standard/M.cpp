// by LIFECOULDBEDREAM
// 2026/03/05 15:07

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(1e5 + 1, 0);
    int curr;
    while (n--)
    {
        cin >> curr;
        _v[curr] = 1;
    }
    for (int i = 1; i < 1e5 + 1; i++)
        _v[i] += _v[i - 1];
    while (m--)
    {
        cin >> curr;
        cout << _v[curr - 1] << " " << _v[1e5] - _v[curr] << "\n";
    }

    return 0;
}