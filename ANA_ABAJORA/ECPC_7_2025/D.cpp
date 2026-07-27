// by LIFECOULDBEDREAM
// 2026/07/24 22:03

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c));

    return 0;
}