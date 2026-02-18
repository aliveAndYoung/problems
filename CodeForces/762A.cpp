// by LIFECOULDBEDREAM
// 2026/02/18 16:51

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    if (n == 1)
    {
        if (k == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
        return 0;
    }
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            count++;
        if (count == k)
        {
            cout << i << endl;
            return 0;
        }
    }

    if (count * 2 >= k)
    {
        ll sub_count = count * 2;
        if (ll(sqrtl(n)) * ll(sqrtl(n)) == n)
            sub_count--;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (sub_count == k)
                {

                    cout << n / i << endl;
                    return 0;
                }
                else
                {
                    sub_count--;
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}