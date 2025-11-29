// by LIFECOULDBEDREAM
// 2025/11/29 17:45

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a & (1 << b))
        cout << "true";
    else
        cout << "false";

    return 0;
}