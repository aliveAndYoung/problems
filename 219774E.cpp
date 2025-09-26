// by LIFECOULDBEDREAM
// 2025/09/26 15:23

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, curr, index = 0, min = 0x7fffffff;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> curr;
        if (curr < min)
        {
            min = curr;
            index = i;
        }
    }
    cout << min << " " << index;

    return 0;
}