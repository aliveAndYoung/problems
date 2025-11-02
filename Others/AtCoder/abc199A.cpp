// by LIFECOULDBEDREAM
// 2025/11/02 14:58

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if (((a * a) + (b * b)) < (c * c))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}