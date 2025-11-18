// by LIFECOULDBEDREAM
// 2025/11/18 23:53

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v1(a), v2(a), v3(a);
    for (int i = 0; i < a; i++)
        cin >> v1[i];
    for (int i = 0; i < a; i++)
        cin >> v2[i];
    for (int i = 0; i < a; i++)
        v3[i] = abs(v1[i] - v2[i]);
    sort(v3.begin(), v3.end(), greater<int>());
    int total = b + c;
    for (int i = 0; i < b + c; i++)
    {
        if (total > 0 && v3[0] > 0)
        {
            v3[0]--;
            total--;
            sort(v3.begin(), v3.end(), greater<int>());
        }
    }
    ll ans = 0;
    ans += total % 2;
    for (int i = 0; i < a; i++)
        ans += ll(v3[i]) * ll(v3[i]);

    cout << ans;
    return 0;
}