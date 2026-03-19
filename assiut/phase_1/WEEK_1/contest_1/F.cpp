// by LIFECOULDBEDREAM
// 2026/03/18 03:16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string _s;
    cin >> _s;
    int flag1 = 0, flag2 = 0 , flag3 = 0 , flag4 = 0;
    for (int i = 0; i < _s.size(); i++)
    {
        if (i > 0 && i < _s.size() - 1 && _s[i] == '@')
            (flag1 = flag1 + 1) , (flag3 = i );
        if (i > 0 && i < _s.size() - 1 && _s[i] == '.' && _s[i - 1] != '@')
            (flag2 = flag2 + 1)  , (flag4 = i );
    }
    if (flag1 == 1 && flag2 == 1 && flag3 < flag4)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}