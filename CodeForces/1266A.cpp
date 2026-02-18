// by LIFECOULDBEDREAM
// 2026/02/18 15:22

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string curr;

    while (n--)
    {
        int zeros = 0, evens = 0, sum = 0;
        cin >> curr;

        for (char _c : curr)
        {
            int _n = _c - '0';
            if (_n == 0)
                zeros++;
            if (_n % 2 == 0)
                evens++;
            sum += _n;
        }
        if (sum % 3 == 0 && zeros > 0 && evens >= 2)
            cout << "red\n";
        else

            cout << "cyan\n";
    }

    return 0;
}