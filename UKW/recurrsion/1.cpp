// by LIFECOULDBEDREAM
// 2026/08/10 04:17

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
void print(int _n)
{
    if (_n == 0)
        return;
    cout << "I love Recursion\n";
    print(--_n);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    print(n);
    return 0;
}