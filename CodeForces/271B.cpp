// by LIFECOULDBEDREAM
// 2026/02/25 01:22

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> _v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> _v[i][j];
    vector<int> primes(1e5 + 1, 1);
    primes[0] = primes[1] = 0;
    for (int i = 2; i * i <= 1e5 + 1; i++)
        for (int j = 2*i; j <= 1e5 + 1; j = j + i)
            primes[j] = 0;
    int next = 2;
    for (int i = 1e5 + 1; i > 0; i--)
    {
        if (primes[i] == 1)
        {
            primes[i] = 0;
            next = 1;
        }
        else
        {
            primes[i] = next;
            next++;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            _v[i][j] = primes[_v[i][j]];
    long long least = 1e18, curr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            curr += _v[i][j];
        least = min(least, curr);
        curr = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            curr += _v[j][i];
        least = min(least, curr);
        curr = 0;
    }
    cout << least;
    return 0;
}