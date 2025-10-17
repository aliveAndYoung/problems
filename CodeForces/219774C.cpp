// by LIFECOULDBEDREAM
// 2025/09/26 15:13

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, c;
    cin >> n;
    while (n--)
    {
        cin >> c;
        c == 0 && cout << "0 ";
        c > 0 && cout << "1 ";
        c < 0 && cout << "2 ";
    }
    return 0;
}