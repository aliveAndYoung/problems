// by LIFECOULDBEDREAM
// 2026/02/23 20:27

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int left = -1e9, right = 1e9;
    string q;
    char a;
    int curr;

    for (int i = 0; i < n; i++)
    {
        cin >> q >> curr >> a;
        if (a == 'Y')
        {
            if (q == "<")
            {
                right = min(curr - 1, right);
            }
            else if (q == "<=")
            {
                right = min(curr, right);
            }
            else if (q == ">")
            {
                left = max(curr + 1, left);
            }
            else if (q == ">=")
            {
                left = max(curr, left);
            }
        }
        else
        {
            if (q == "<")
            {
                left = max(curr, left);
            }
            else if (q == "<=")
            {
                left = max(curr + 1, left);
            }
            else if (q == ">")
            {
                right = min(curr, right);
            }
            else if (q == ">=")
            {
                right = min(curr - 1, right);
            }
        }
        if (left > right)
        {
            cout << "Impossible";
            return 0;
        }
    }
    cout << left;

    return 0;
}