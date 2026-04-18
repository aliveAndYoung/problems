// by LIFECOULDBEDREAM
// 2026/04/18 02:26

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    stack<ll> _s;
    stack<ll> __s;
    ll a, b;

    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            _s.push(b);
            if (__s.empty() || __s.top() <= b)
                __s.push(b);
        }
        else
        {
            if (_s.top() == __s.top())
                __s.pop();
            _s.pop();
        }
        cout << __s.top() << '\n';
    }

    return 0;
}