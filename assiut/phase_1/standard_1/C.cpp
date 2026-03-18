// by LIFECOULDBEDREAM
// 2026/02/28 15:49

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    sort(_v.begin(), _v.end());
    for (int i = 0; i < n; i++)
        cout << _v[i] << ' ';

    return 0;
}