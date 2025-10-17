// by LIFECOULDBEDREAM
// 2025/09/26 14:34

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> s;
    auto ptr = find(nums.begin(), nums.end(), s);
    (ptr == nums.end()) ? cout << -1 : cout << distance(nums.begin(), ptr);

    return 0;
}