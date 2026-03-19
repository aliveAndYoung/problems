// by LIFECOULDBEDREAM
// 2026/02/28 15:52

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> _v(2 * m + 1, 0);
    int curr;
    for (int i = 0; i < n; i++)
        cin >> curr, _v[curr +m ]++;
    for (int i = 0; i < _v.size(); i++)
    {
        if (_v[i] == 0)
        {
            cout << i - m;
            return 0;
        }
    }

    return 0;
}