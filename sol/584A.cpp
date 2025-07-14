// by LIFECOULDBEDREAM
// 2025/07/14 19:03

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }
    if (t == 10)
    {
        cout << "10";

        n -= 2;
        while (n--)
        {
            cout << '0';
        }
    }
    else
    {
        cout << t;
        n--;
        while (n--)
        {
            cout << '0';
        }
    }
    return 0;
}