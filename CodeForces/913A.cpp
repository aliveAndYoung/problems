// by LIFECOULDBEDREAM
// 2026/02/19 17:06

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    if (n >= 27)
        cout << m;
    else
        cout << m % (1LL << n);

    return 0;
}