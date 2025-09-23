// by LIFECOULDBEDREAM
// 2025/09/23 17:24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string out = "";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        out += '*';
    }
    while (n--)
    {

        cout << out << "\n";
        out.pop_back();
    }

    return 0;
}