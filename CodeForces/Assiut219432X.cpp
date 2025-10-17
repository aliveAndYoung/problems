// by LIFECOULDBEDREAM
// 2025/09/23 21:17

#include <bits/stdc++.h>
using namespace std;
int getBinaryOnes(int w)
{
    int count = 0;
    for (int i = 31; i >= 0; i--)
        if (w & (1 << i))
            count++;
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int h;
        cin >> h;
        cout << (1 << getBinaryOnes(h)) - 1 << "\n";
    }

    return 0;
}