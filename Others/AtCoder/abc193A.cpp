// by LIFECOULDBEDREAM
// 2025/11/02 15:05

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;
    double ans = ((a - b) / a) * 100.0;

    cout << fixed << setprecision(15) << ans;

    return 0;
}