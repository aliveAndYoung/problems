// by LIFECOULDBEDREAM
// 2025/11/16 16:53

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < a; i++)
            cout << v[i] << " ";
        cout << "\n";
    }

    return 0;
}