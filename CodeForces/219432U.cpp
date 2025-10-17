// by LIFECOULDBEDREAM
// 2025/09/25 21:14

#include <bits/stdc++.h>
using namespace std;

long long getSum(int _a, int _b, int _i)
{
    int digitsSum = 0, temp = _i;
    while (temp > 0)
    {
        int digit = (temp % 10);
        digitsSum += digit;
        temp = temp / 10;
    }
    return (digitsSum > _b || digitsSum < _a) ? 0 : _i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    long long someSums = 0;
    for (int i = 1; i <= n; i++)
    {
        someSums += getSum(a, b, i);
    }
    cout << someSums;

    return 0;
}