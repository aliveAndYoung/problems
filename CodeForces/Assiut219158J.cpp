// by LIFECOULDBEDREAM
// 2025/09/21 09:05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";

    return 0;
}