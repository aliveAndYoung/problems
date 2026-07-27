// by LIFECOULDBEDREAM
// 2026/07/27 21:16

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n;
    set<int> s;
    while (n)
    {
        a = n % 10;
        n = n / 10;
        s.insert(a);
    }
    if (s.size() > 3)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}