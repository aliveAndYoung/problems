// by LIFECOULDBEDREAM
// 2025/09/30 22:01

#include <bits/stdc++.h>
using namespace std;
int getNo(long long _a)
{
    for (int i = 0; i < 64; i++)
        if (_a & (1 << i))
            return i;
    return 64;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, currNo, min = 64;
    long long curr;
    cin >> n;
    while (n--)
    {
        cin >> curr;
        currNo = getNo(curr);
        currNo < min && (min = currNo);
    }
    cout << min;
    return 0;
}