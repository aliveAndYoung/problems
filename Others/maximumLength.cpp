#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            long long a;
            cin >> a;
            if (a == 0)
            {
                sum += 1;
            }
            else
            {
                sum += abs(a);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}