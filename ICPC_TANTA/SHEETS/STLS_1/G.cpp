// by LIFECOULDBEDREAM
// 2025/10/17 21:48

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int opened = 0;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        (c == '(') && opened++;
        (c == ')') && (opened > 0) && opened-- &&count++;
    }
    cout << count * 2 << "\n";
    return 0;
}