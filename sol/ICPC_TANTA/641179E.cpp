// by LIFECOULDBEDREAM
// 2025/10/10 19:40

#include <bits/stdc++.h>
using namespace std;

long long getSol(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        cout << getSol(m) << "\n";
    }

    return 0;
}