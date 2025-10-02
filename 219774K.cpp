// by LIFECOULDBEDREAM
// 2025/10/02 15:29

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr = 0, summ = 0;
    char c;
    cin >> n;
    while (n--)
    {
        cin >> c;

        curr = int(c) - 48;
        summ += curr;
    }
    cout << summ;

    return 0;
}