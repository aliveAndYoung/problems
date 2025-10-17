// by LIFECOULDBEDREAM
// 2025/09/23 20:18

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, temp;
    cin >> n;
    temp = n;
    string out = "*", space = "";
    for (int i = 1; i < n; i++)
        space += " ";

    for (int i = 0; i < n; i++)
    {

        cout << space << out << "\n";
        out += "**";
        if (!space.empty())
            space.pop_back();
    }
    for (int i = 0; i < n; i++)
    {

        if (!out.empty())
            out.pop_back();
        if (!out.empty())
            out.pop_back();
        cout << space << out << "\n";
        space += ' ';
    }
    return 0;
}