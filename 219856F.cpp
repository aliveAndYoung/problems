// by LIFECOULDBEDREAM
// 2025/10/02 15:19

#include <bits/stdc++.h>
using namespace std;
string getAns(string _a)
{
    string ans = "";
    ans += _a[0];
    ans += to_string(_a.size() - 2);
    ans += _a[_a.size() - 1];
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string curr;
    cin >> n;
    while (n--)
    {
        cin >> curr;
        (curr.length() > 10) ? (cout << getAns(curr)) : (cout << curr);
        cout << "\n";
    }

    return 0;
}