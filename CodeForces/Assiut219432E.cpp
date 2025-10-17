// by LIFECOULDBEDREAM
// 2025/09/23 16:56

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, temp, max = -0x7fffffff;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        max = temp > max ? temp : max;
    }
    cout << max;
    return 0;
}