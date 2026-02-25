// by LIFECOULDBEDREAM
// 2026/02/20 15:06

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, _67s = 0, _c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> _c;
            if (_c == 67)
                _67s++;
        }
        if (_67s)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}