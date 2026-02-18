// by LIFECOULDBEDREAM
// 2026/02/18 15:41

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (primes[i])
            for (int j = i * 2; j <= n; j += i)
                primes[j] = false;
    int count = 0, last = 2;
    for (int i = 3; i <= n; i++)
    {
        if (last + i + 1 <= n && primes[i] && primes[last + i + 1])
            count++;

        if (primes[i])
            last = i;
    }
    if (count >= k)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}