// by LIFECOULDBEDREAM
// 2025/10/17 16:36

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    vector<int> theVec(a);
    for (int i = 0; i < a; i++)
        cin >> theVec[i];
    sort(theVec.begin(), theVec.end());
    for (int i = 0; i < a; i++)
        cout << theVec[i] << " ";

    return 0;
}