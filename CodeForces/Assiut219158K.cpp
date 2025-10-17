// by LIFECOULDBEDREAM
// 2025/09/21 09:43

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, min = __INT_MAX__, max = -__INT_MAX__ , c = 3;
    while (c--)
    {
        cin >> a;
        if (a < min)
            min = a;
        if (a > max)
            max = a;
    }
    cout << min << " " << max;
    return 0;
}