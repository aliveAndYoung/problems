// by LIFECOULDBEDREAM
// 2025/09/26 16:20

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> myVec(n, 0);
    for (int i = 0; i < n; i++)
        cin >> myVec[i];
    for (int i = 0; i < n / 2; i++)
    {
        if (myVec[i] != myVec[n - 1 - i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}