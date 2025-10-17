// by LIFECOULDBEDREAM
// 2025/09/21 18:09

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(3), temp(3);
    cin >> v[0] >> v[1] >> v[2];
    temp.assign(v.begin(), v.end());
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; i++)
        cout << v[i] << "\n";

    for (int i = 0; i < 3; i++)
        cout << temp[i] << "\n";

    return 0;
}