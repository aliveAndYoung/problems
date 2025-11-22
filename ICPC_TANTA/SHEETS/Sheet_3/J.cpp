// by LIFECOULDBEDREAM
// 2025/11/21 08:41

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    pair<int, ll> track = {0, 0};
    int a;
    cin >> a;
    vector<ll> v(a + 1, 0);
    for (int i = 1; i <= a; i++)
        cin >> v[i];

    for (int i = 1; i <= a; i++)
        v[i] += v[i - 1];

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            if (  ((j - i + 1) > track.first) && (v[j] - v[i - 1]) % 7 == 0  )
            {
                track.first = (j - i + 1);
                track.second = v[j] - v[i - 1];
            }
        }
    }
    cout << track.first;
    return 0;
}