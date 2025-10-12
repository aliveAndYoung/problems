// by LIFECOULDBEDREAM
// 2025/10/12 23:25

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c / a; i++)
    {

        for (int j = 0; j <= c / b; j++)
        {
            if (a * i + b * j == c)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";

    return 0;
}