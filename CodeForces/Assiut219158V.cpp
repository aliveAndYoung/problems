// by LIFECOULDBEDREAM
// 2025/09/21 09:32

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    char s;
    cin >> a >> s >> b;
    bool right = false;
    if (s == '>')
    {
        if (a > b)
            right = true;
    }
    if (s == '=')
    {
        if (a == b)
            right = true;
    }
    if (s == '<')
    {
        if (a < b)
            right = true;
    }
    right ? cout << "Right" : cout << "Wrong";

    return 0;
}