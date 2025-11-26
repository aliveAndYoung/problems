// by LIFECOULDBEDREAM
// 2025/11/26 21:31

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> getDivisors(ll _a)
{
    vector<ll> divs;
    for (ll i = 1; i * i <= _a; i++)
    {
        if (_a % i == 0)
        {
            divs.push_back(i);
            if (i != _a / i)
                divs.push_back(_a / i);
        }
    }
    return divs;
}
ll solve(int a)
{
    vector<ll> v(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<ll> divs = getDivisors(v[0]);
    ll ans = divs.size();
    for (int i = 0; i < divs.size(); i++)
    {
        for (ll j = 1; j < a; j++)
        {
            if (v[j] % divs[i] != 0)
            {
                ans--;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    cout << solve(a);

    return 0;
}