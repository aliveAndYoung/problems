// by LIFECOULDBEDREAM
// 2025/10/10 19:29

#include <bits/stdc++.h>
using namespace std;
string getSol(string _c)
{
    if (_c.length() <= 10)
        return _c;
    string ans = "";
    ans += _c[0];
    ans += to_string(_c.size() - 2);
    ans += _c[_c.size() - 1];
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string c;
    while (n--)
    {
        cin >> c;
        cout << getSol(c) << "\n";
    }

    return 0;
}