// by LIFECOULDBEDREAM
// 2025/10/17 17:37

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    string s;
    while (a--)
    {
        cin >> s;
        int q1 = 0, q2 = 0;
        int count = 0;
        for (char c : s)
        {
            (c == '(') && q1++;
            (c == '[') && q2++;
            (c == ')') && (q1 > 0) && (q1--, count++);
            (c == ']') && (q2 > 0) && (q2--, count++);
        }
        cout << count << "\n";
    }

    return 0;
}