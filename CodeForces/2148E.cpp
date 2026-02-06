// by LIFECOULDBEDREAM
// 2026/02/05 18:20

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
        int n, k;
        ll ans = 0;
        cin >> n >> k;
        vector<int> a(n + 1, 0);
        map<int, int> freqq;
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            freqq[a[i]]++;
        }
        bool flag = false;
        for (auto it : s)
        {
            if (freqq[it] % k != 0)
            {
                cout << "0\n";
                flag = true;
                break;
            }
            freqq[it] = freqq[it] / k;
        }
        if (flag)
            continue;
        int l = 1, r = 1;
        map<int, int> ms;
        while (r <= n)
        {

            ms[a[r]]++;
            while (l <= r && ms[a[r]] > freqq[a[r]])
                ms[a[l++]]--;
            ans += r - l + 1;
            r++;
        }

        cout << ans << '\n';
    }

    return 0;
}