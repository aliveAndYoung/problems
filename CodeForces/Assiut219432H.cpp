// by LIFECOULDBEDREAM
// 2025/09/22 12:16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int o = 2; o <= int(sqrt(n)); o++)
    {
        if (n % o == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}