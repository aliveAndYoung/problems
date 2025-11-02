// by LIFECOULDBEDREAM
// 2025/11/02 16:38

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    long long ans = 0;
    cin >> s >> t;
    for (int a = 0; a <= 100; a++)
    {
        for (int b = 0; b <= 100; b++)
        {
            for (int c = 0; c <= 100; c++)
            {
                (a + b + c <= s) && (a * b * c <= t) && ans++;
            }
        }
    }
    cout << ans;

    return 0;
}