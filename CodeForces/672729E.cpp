// by LIFECOULDBEDREAM
// 2026/02/19 15:23

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, f;
    cin >> n >> f;
    vector<ll> _gain(n);
    ll ans = 0;
    ll _c1, _c2;
    for (int i = 0; i < n; i++)
    {
        cin >> _c1 >> _c2;
        ll _norm = min(_c1, _c2);
        ll _doup = min(2 * _c1, _c2);

        ans = ans + _norm;
        _gain[i] = _doup - _norm;
    }
    sort(_gain.rbegin(), _gain.rend());
    for (int i = 0; i < f; i++)
    {
        ans = ans + _gain[i];
    }

    cout << ans;

    return 0;
}

// // by LIFECOULDBEDREAM
// // 2026/02/19 14:39

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// bool custom_cmp_1(pair<ll, ll> a, pair<ll, ll> b)
// {
//     if (a.first == 0 || a.second == 0)
//     {
//         return false;
//     }
//     if (b.first == 0 || b.second == 0)
//     {
//         return true;
//     }
//     ll max_a = min(a.first * 2, a.second);
//     ll max_b = min(b.first * 2, b.second);
//     return max_a > max_b;
// }
// bool custom_cmp_2(pair<ll, ll> a, pair<ll, ll> b)
// {
//     if (a.first == 0 || a.second == 0)
//     {
//         return false;
//     }
//     if (b.first == 0 || b.second == 0)
//     {
//         return true;
//     }
//     ll max_a = min(a.first, a.second);
//     ll max_b = min(b.first, b.second);
//     return max_a > max_b;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll n, f;
//     cin >> n >> f;
//     vector<pair<ll, ll>> _p(n);
//     ll _f, _s;

//     for (ll i = 0; i < n; i++)
//     {
//         cin >> _f >> _s;
//         _p[i] = {_f, _s};
//     }

//     sort(_p.begin(), _p.end(), custom_cmp_1);
//     sort(_p.begin() + f, _p.end(), custom_cmp_2);
//     ll ans = 0;
//     for (int i = 0; i < f; i++)
//     {
//         ans = ans + min(_p[i].first * 2, _p[i].second);
//     }
//     for (int i = f; i < n; i++)
//     {
//         ans = ans + min(_p[i].first, _p[i].second);
//     }
//     cout << ans;
//     return 0;
// }