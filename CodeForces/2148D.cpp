// by LIFECOULDBEDREAM
// 2026/02/04 02:02

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
        int a;
        long long num = 0;
        vector<int> odds;

        cin >> a;
        for (int i = 0; i < a; i++)
        {
            int curr;
            cin >> curr;
            if (curr % 2 == 0)
                num += curr;
            else
                odds.push_back(curr);
        }
        if (odds.size() == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            sort(odds.begin(), odds.end(), greater<int>());
            for (int f = 0; f < ceil(odds.size() / 2.0); f++)
            {
                num += odds[f];
            }
            cout << num << '\n';
        }
    }

    return 0;
}