// by LIFECOULDBEDREAM
// 2026/03/17 20:32

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    if (n % 2 == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << "a ";
        }
    }
    else
    {
        for (ll i = 1; i < n; i++)
        {
            cout << "a ";
        }
        cout << "b ";
    }

    return 0;
}