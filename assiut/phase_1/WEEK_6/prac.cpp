// by LIFECOULDBEDREAM
// 2026/07/08 06:49

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
int gcd(int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
const int limit = 1e8;
bitset<limit> sieve()
{
    bitset<limit> isPrime = bitset<limit>().set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= limit; i++)
        if (isPrime[i])
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = 0;

    return isPrime;
}
vector<pair<int, int>> factorize(int n)
{
    vector<pair<int, int>> factors;
    for (int i = 0; i * i <= n; i++)
    {
        int count = 0;
        while (n % i == 0)
            n = n / i, count++;
        factors.push_back({i, count});
    }
    if (n > 1)
        factors.push_back({n, 1});
    return factors;
}
vector<int> divisors(int n)
{
    vector<int> divs;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (n / i != i)
                divs.push_back(n / i);
        }
    }
    return divs;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}