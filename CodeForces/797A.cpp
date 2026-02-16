// by LIFECOULDBEDREAM
// 2026/02/16 23:15

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    multiset<int> _d;
    int i = 2;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            _d.insert(i);
            n = n / i;
        }
    }
    if (n != 1)
        _d.insert(n);
    if (_d.size() >= k)
    {
        ll last = 1;
        k--;
        for (int _x : _d)
        {
            if (k)
            {
                k--;
                cout << _x << " ";
            }
            else
            {
                last = last * _x;
            }
        }
        cout << last;
    }
    else
        cout << "-1";

    return 0;
}