// by LIFECOULDBEDREAM
// 2026/07/02 18:14

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    if (a % 2 == 0 && ((a / 10) % 2) == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}