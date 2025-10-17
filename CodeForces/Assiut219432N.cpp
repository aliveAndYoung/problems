// by LIFECOULDBEDREAM
// 2025/09/23 17:19

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char a;
    cin >> a >> n;

    while (n--)
    {
        int b;
        cin >> b;
        string out = "";
        for (int i = 0; i < b; i++)
            out += a;
        cout << out << "\n";
    }

    return 0;
}