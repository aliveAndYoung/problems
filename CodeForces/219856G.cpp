// by LIFECOULDBEDREAM
// 2025/10/02 15:46

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (char a : s)
    {
        (a == 44) && (cout << " ");
        (a > 64 && a < 91) && (cout << char(a + 32));
        (a > 96 && a < 123) && (cout << char(a - 32));
    }

    return 0;
}