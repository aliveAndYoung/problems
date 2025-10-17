// by LIFECOULDBEDREAM
// 2025/10/02 16:20

#include <bits/stdc++.h>
using namespace std;
bool getAns(string _a)
{
    bool ans = false;
    for (int i = 0; i < _a.size() - 2; i++)
    {
        (_a[i] == '0') && (_a[i + 1] == '1') && (_a[i + 2] == '0') && (ans = true);
        (_a[i] == '1') && (_a[i + 1] == '0') && (_a[i + 2] == '1') && (ans = true);
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        (getAns(s)) ? cout << "Good" : cout << "Bad";
        cout << "\n";
    }

    return 0;
}