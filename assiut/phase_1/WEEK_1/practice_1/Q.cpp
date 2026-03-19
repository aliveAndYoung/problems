// by LIFECOULDBEDREAM
// 2026/03/12 02:03

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> _a(n + 1, 0), _b(n + 1, 0), _c(n + 1, 0), _d(n + 1, 0);
    if (n <= 2)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> _a[i];
        _b[i] = _a[i];
    }
    ll ans = 0x3f3f3f3f3f3f3f3f;
    ll curr, last;

    // =============== case  1 ============
    ll _1 = _a[2] - _a[1];
    curr = 0;
    last = _a[2];
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _1)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _1 || _a[i] - 1 - last == _1)
        {
            curr++;
            last = _a[i] + 1 - last == _1 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  2 ============
    ll _2 = _a[2] + 1 - _a[1];
    curr = 1;
    last = _a[2] + 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _2)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _2 || _a[i] - 1 - last == _2)
        {
            curr++;
            last = _a[i] + 1 - last == _2 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  3 ============
    ll _3 = _a[2] - 1 - _a[1];
    curr = 1;
    last = _a[2] - 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _3)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _3 || _a[i] - 1 - last == _3)
        {
            curr++;
            last = _a[i] + 1 - last == _3 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  4 ============
    ll _4 = _a[2] - _a[1] + 1;
    curr = 1;
    last = _a[2];
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _4)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _4 || _a[i] - 1 - last == _4)
        {
            curr++;
            last = _a[i] + 1 - last == _4 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  5 ============
    ll _5 = _a[2] - _a[1] - 1;
    curr = 1;
    last = _a[2];
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _5)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _5 || _a[i] - 1 - last == _5)
        {
            curr++;
            last = _a[i] + 1 - last == _5 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  6 ============
    ll _6 = _a[2] + 1 - _a[1] + 1;
    curr = 2;
    last = _a[2] + 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _6)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _6 || _a[i] - 1 - last == _6)
        {
            curr++;
            last = _a[i] + 1 - last == _6 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  7 ============
    ll _7 = _a[2] - 1 - _a[1] - 1;
    curr = 2;
    last = _a[2] - 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _7)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _7 || _a[i] - 1 - last == _7)
        {
            curr++;
            last = _a[i] + 1 - last == _7 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  8 ============
    ll _8 = _a[2] - 1 - _a[1] + 1;
    curr = 2;
    last = _a[2] - 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _8)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _8 || _a[i] - 1 - last == _8)
        {
            curr++;
            last = _a[i] + 1 - last == _8 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    // =============== case  9 ============
    ll _9 = _a[2] + 1 - _a[1] - 1;
    curr = 2;
    last = _a[2] + 1;
    for (int i = 3; i <= n; i++)
    {
        if (_a[i] - last == _9)
        {
            last = _a[i];
            continue;
        }
        else if (_a[i] + 1 - last == _9 || _a[i] - 1 - last == _9)
        {
            curr++;
            last = _a[i] + 1 - last == _9 ? _a[i] + 1 : _a[i] - 1;
        }
        else
            curr = 0x3f3f3f3f3f3f3f3f;
    }
    ans = min(ans, curr);

    ans = ans == 0x3f3f3f3f3f3f3f3f ? -1 : ans;

    cout << ans;

    return 0;
}