// by LIFECOULDBEDREAM
// 2025/09/22 11:55

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, n, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a > 0)
            pos++;
        if (a < 0)
            neg++;
        if (a % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << "\nOdd: " << odd << "\nPositive: " << pos << "\nNegative: " << neg;
    return 0;
}