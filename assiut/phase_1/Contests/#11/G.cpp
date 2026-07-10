// by LIFECOULDBEDREAM
// 2026/07/10 10:34

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> _v(n);
    for (int i = 0; i < n; i++)
        cin >> _v[i];
    sort(_v.begin(), _v.end());
    int index = upper_bound(_v.begin(), _v.end(), -1) - _v.begin();
    int factor = 0, cnt = 0;
    // index--;
    for (int i = index; i < n; i++)
        factor = factor + _v[i], cnt = cnt + ((i - index + 1) * _v[i]);
    index--;
    while (index > -1 && cnt + factor + _v[index] > cnt)
        cnt = cnt + factor + _v[index], factor = factor + _v[index], index--;
    cout << cnt;
    return 0;
}