// by LIFECOULDBEDREAM
// 2025/10/10 19:20

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> pref(n, 0);
    for (int i = 0; i < n; i++)
        cin >> pref[i];
    sort(pref.begin(), pref.end());
    for (int i = 1; i < n; i++)
        pref[i] += pref[i - 1];
    for (int i = 0; i < n; i++)
    {
        if (pref[i] > x)
        {
            cout << i;
            return 0;
        }
    }
    cout << n;

    return 0;
}