// by LIFECOULDBEDREAM
// 2025/08/15 05:13

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    set<char> colors = {'C', 'M', 'Y'};
    cin >> n >> m;
    for (int i = 0; i < (n * m); i++)
    {
        char pixel;
        cin >> pixel;
        if (colors.count(pixel))
        {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";

    return 0;
}