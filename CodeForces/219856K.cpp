// by LIFECOULDBEDREAM
// 2025/10/02 16:38

#include <bits/stdc++.h>
using namespace std;
string getAns(string _a, string _b)
{
    string ans = "";
    int max = (_a.size() > _b.size()) ? _a.size() : _b.size();
    for (int i = 0; i < max; i++)
    {
        (i < _a.size()) && (ans += _a[i])[0];
        (i < _b.size()) && (ans += _b[i])[0];
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string a, b;
    while (n--)
    {
        cin >> a >> b;
        cout << getAns(a, b) << "\n";
    }

    return 0;
}