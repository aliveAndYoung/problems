#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long> values(100003, 0), sorted(100003, 0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int curr;
        cin >> curr;
        values[i] = curr;
        sorted[i] = curr;
    }

    sort(sorted.begin(), sorted.begin() + n + 1);

    for (int p = 0; p <= n; p++)
    {

        values[p] += values[p - 1];
        sorted[p] += sorted[p - 1];
    }

    int m;
    cin >> m;
    for (int w = 0; w < m; w++)
    {

        int type, l, r;
        long long ans;
        cin >> type >> l >> r;
        if (type == 1)
        {
            ans = values[r] - values[l - 1];
            cout << ans << "\n";
        }
        else
        {
            ans = sorted[r] - sorted[l - 1];
            cout << ans << "\n";
        }
    }

    return 0;
}