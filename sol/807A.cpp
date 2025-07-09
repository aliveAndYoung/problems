// by LIFECOULDBEDREAM
// 2025/07/09 21:41

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag_changed = false;
    bool flag_ordered = true;
    int n;
    cin >> n;
    int a1 = INT_MAX;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
            flag_changed = true;

        if (a1 - a < 0)
            flag_ordered = false;
        a1 = a;
    }
    if (flag_changed)
    {
        cout << "rated";
        return 0;
    }
    if (!flag_ordered)
    {
        cout << "unrated";
        return 0;
    }
    cout << "maybe";

    return 0;
}