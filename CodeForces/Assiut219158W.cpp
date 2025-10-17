// by LIFECOULDBEDREAM
// 2025/09/21 18:14

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
        (a + b) == c ? cout << "Yes" : cout << (a + b);

    if (s == '-')
        (a - b) == c ? cout << "Yes" : cout << (a - b);

    if (s == '*')
        (a * b) == c ? cout << "Yes" : cout << (a * b);

    return 0;
}