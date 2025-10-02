// by LIFECOULDBEDREAM
// 2025/10/02 15:43

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    char c;
    cin >> a >> c >> b;
    (c == '+') && (cout << a + b);
    (c == '*') && (cout << a * b);
    (c == '-') && (cout << a - b);
    (c == '/') && (cout << a / b);

    return 0;
}