// by LIFECOULDBEDREAM
// 2026/02/08 01:59

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            cout << i * i << " ";
        }
        cout << '\n';
    }

    return 0;
}