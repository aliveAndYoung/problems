// by LIFECOULDBEDREAM
// 2026/05/18 01:37

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> _v(n + 1);
        for (ll i = 1; i <= n; i++)
            cin >> _v[i];
        stack<ll> _s;
        ll counter = 1;
        ll curr = 1;
        while (true)
        {
            if (_v[curr] == counter)
            {
                counter++;
                if (counter == n + 1)
                {
                    cout << "YES\n";
                    break;
                }

                curr++;
            }
            else if (!_s.empty() && _s.top() == counter)
            {
                counter++;
                if (counter == n + 1)
                {
                    cout << "YES\n";
                    break;
                }
                _s.pop();
            }
            else
            {
                if (curr <= n)
                    _s.push(_v[curr]);
                curr++;
            }
            if (curr > n)
            {
                if (!_s.empty() && _s.top() == counter)
                {
                    counter++;
                    if (counter == n + 1)
                    {
                        cout << "YES\n";
                        break;
                    }
                    _s.pop();
                    continue;
                }
                else
                    cout << "NO\n";
                break;
            }
        }
    }

    return 0;
}