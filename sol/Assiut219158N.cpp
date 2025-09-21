// by LIFECOULDBEDREAM
// 2025/09/21 09:18

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char a;
    cin >> a;
    if (a < 91)
        a += 32;
    else
        a -= 32;
    cout << a;

    return 0;
}