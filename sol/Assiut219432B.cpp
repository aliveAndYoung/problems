// by LIFECOULDBEDREAM
// 2025/09/22 11:50

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    if (a == 1)
    {
        cout << -1;
        return 0;
    }
    for (int i = 2; i <= a; i += 2)
        cout << i << "\n";
    return 0;
}