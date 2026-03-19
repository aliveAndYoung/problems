// by LIFECOULDBEDREAM
// 2026/02/27 02:26

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> _v(n), freq(1e6 + 1, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> _v[i];
        sum += _v[i];
        freq[_v[i]]++;
    }
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll test = sum;
        test -= _v[i];
        if (test % 2 == 0)
        {
            test = test / 2;
            if (test <= 1e6 && freq[test] > 0 && (test != _v[i] || freq[test] > 1))
            {
                ans.push_back(i + 1);
            }
        }
    }
    cout << ans.size() << '\n';
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}