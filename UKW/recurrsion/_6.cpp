// by LIFECOULDBEDREAM
// 2026/08/10 06:04

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
void print(vector<int> &_v, int idx)
{
    if (idx % 2 == 1)
        print(_v, idx - 1);
    else
    {
        cout << _v[idx];
        if (idx == 0)
            return;
        cout << " ";
        print(_v, idx - 2);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    print(v, n - 1);
    return 0;
}