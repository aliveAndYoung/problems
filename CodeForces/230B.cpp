// by LIFECOULDBEDREAM
// 2026/02/16 22:44

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const ll count = 1e6 + 2;
    vector<bool> primes(count, true);
    primes[0] = primes[1] = false;
    for (ll i = 2; i * i < count; i++)
    {
        if (primes[i])
        {
            for (ll j = i * i; j < count; j = i + j)
            {
                primes[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    ll temp, check;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        check = sqrt(temp);
        if (check * check == temp && primes[check])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}