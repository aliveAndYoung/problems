// by LIFECOULDBEDREAM
// 2025/10/17 22:55

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n;
    string s;
    while (n--)
    {
        int opened = 0;
        int count = 0;
        cin >> a >> s;
        for (char c : s)
        {
            (c == '(') && opened++;
            (c == ')') && (opened == 0) && count++;
            (c == ')') && (opened > 0) && opened--;
        }
        cout << count << "\n";
    }

    return 0;
}