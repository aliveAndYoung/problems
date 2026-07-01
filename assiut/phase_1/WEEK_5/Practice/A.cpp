// by LIFECOULDBEDREAM
// 2026/07/01 06:01

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> _v(m);
    for (int i = 0; i < m; i++)
        cin >> _v[i];
    int base, counter = 0;
    cin >> base;
    for (int i = 0; i < m; i++)
        if (k >= __popcount(base ^ _v[i]))
            counter++;
    cout << counter;
    return 0;
}