// by LIFECOULDBEDREAM
// 2025/11/22 11:59

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];
        if (k == 1)
        {
            cout << "yes\n";
            continue;
        }
        for (int i = k - 1; i > 0; i--)
        {
            v[i] = v[i] - v[i - 1];
        }
        if (v[0] > (v[1] * (n - k + 1)))
        {
            cout << "no\n";
            continue;
        }
        bool flag = true;
        for (int i = 1; i < k - 1; i++)
        {
            if (v[i] > v[i + 1])
                flag = false;
        }
        if (flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}