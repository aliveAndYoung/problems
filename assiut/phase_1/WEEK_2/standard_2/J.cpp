// by LIFECOULDBEDREAM
// 2026/03/30 23:24

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> _v(n + 1), _ans(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> _v[i];

    stack<ll> monotonic_stack;
    for (ll i = n; i > 0; i--)
    {

        while (!monotonic_stack.empty() && _v[i] >= _v[monotonic_stack.top()])
            monotonic_stack.pop();

        _ans[i] = monotonic_stack.empty() ? -1 : monotonic_stack.top();
        monotonic_stack.push(i);
    }

    ll q, x;
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << _ans[x] << "\n";
    }

    return 0;
}