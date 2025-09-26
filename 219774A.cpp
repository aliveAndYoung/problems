// by LIFECOULDBEDREAM
// 2025/09/26 14:28

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum, curr;
    cin >> n;
    while (n--)
    {
        cin >> curr;
        sum += curr;
    }
    cout << abs(sum);

    return 0;
}