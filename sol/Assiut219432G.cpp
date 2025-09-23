// by LIFECOULDBEDREAM
// 2025/09/23 17:02

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        long long fac = 1;
        cin >> a;
        for (int i = 1; i <= a; i++)
            fac *= i;
        cout << fac << "\n";
    }

    return 0;
}