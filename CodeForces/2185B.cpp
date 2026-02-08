// by LIFECOULDBEDREAM
// 2026/02/08 02:07

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int curr, max = -0x7fffffff;
        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            max = max > curr ? max : curr;
        }
        cout << n * max << endl;
    }

    return 0;
}