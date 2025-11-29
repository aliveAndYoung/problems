// by LIFECOULDBEDREAM
// 2025/11/29 17:50

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unsigned curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        cout << ~curr << "\n";
    }

    return 0;
}