// by LIFECOULDBEDREAM
// 2025/10/17 22:47

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length() + 1; i++)
    {
        if (a == b)
        {
            cout << "Yes";
            return 0;
        }
        a = a.back() + a.substr(0, a.length() - 1);
    }
    cout << "No";

    return 0;
}