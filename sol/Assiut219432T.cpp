// by LIFECOULDBEDREAM
// 2025/09/23 20:18

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << "*";
    //     return 0;
    // }
    string out = "*", space = "";
    for (int i = 1; i < n; i++)
        space += " ";

    while (n--)
    {

        cout << space << out << "\n";
        out += "**";
        if (!space.empty())
            space.pop_back();
    }
    return 0;
}