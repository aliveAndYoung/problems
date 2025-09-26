// by LIFECOULDBEDREAM
// 2025/09/26 16:00

#include <bits/stdc++.h>
using namespace std;
int getFibo(int a, vector<int> &dict)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    if (dict[a] != 0)
        return dict[a];
    int res = getFibo(a - 1, dict) + getFibo(a - 2, dict);
    dict[a] = res;
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> myDict(46, 0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout
            << getFibo(i, myDict) << " ";
    return 0;
}