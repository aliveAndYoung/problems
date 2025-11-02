// by LIFECOULDBEDREAM
// 2025/11/02 18:59

#include <bits/stdc++.h>
using namespace std;

int getPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    int count = 0;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < int(primes.size()); i++)
    {

        for (int j = i+1; j < int(primes.size()); j++)
        {
            (primes[i] * primes[j]) <= n && (count++, 0);
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a;
    b = getPrimes(a);
    cout << b;

    return 0;
}