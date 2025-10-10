// by LIFECOULDBEDREAM
// 2025/10/10 19:08

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> divisors;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != sqrt(n))
                divisors.push_back(n / i);
        }
    sort(divisors.begin(), divisors.end());
    divisors.size() < k ? cout << -1 : cout << divisors[k - 1];

    return 0;
}