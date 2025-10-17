// by LIFECOULDBEDREAM
// 2025/09/30 22:57

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr;
    string ans = "yes";
    cin >> n;
    vector<int> one(n, 0);
    vector<int> two(n, 0);
    for (int i = 0; i < n; i++)
        cin >> one[i];
    for (int i = 0; i < n; i++)
        cin >> two[i];

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    for (int i = 0; i < n; i++)
        (one[i] != two[i]) && (ans = "no")[0];
    cout << ans;

    return 0;
}