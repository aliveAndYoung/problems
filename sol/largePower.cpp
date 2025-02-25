#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (y == 0)
        {
            cout << "1\n";
            continue;
        }

        int d = 1;
        long long temp = x;
        while (temp >= 10)
        {
            temp /= 10;
            d++;
        }

        long long tenPower = 1;
        for (int i = 0; i < d - 1; ++i)
        {
            tenPower *= 10;
        }

        long double m = (long double)x / tenPower;
        long double log_m = log10l(m);
        long double log_total = y * (d - 1 + log_m);
        long long digits = floorl(log_total) + 1;

        cout << digits << '\n';
    }
    return 0;
}