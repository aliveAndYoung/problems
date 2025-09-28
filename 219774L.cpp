// by LIFECOULDBEDREAM
// 2025/09/28 16:29

#include <bits/stdc++.h>
using namespace std;
int getMaxWithinRegoin(vector<int> theVec, int start, int window)
{
    int max = -0x7fffffff;
    for (int i = start; i < start + window; i++)
        (i < theVec.size()) && (theVec[i] > max) && (max = theVec[i]);
    return max;
}
vector<int> getAns(vector<int> vec)
{
    vector<int> answer;
    for (int i = 1; i <= vec.size(); i++)
        for (int j = 0; j <= vec.size() - i; j++)
            answer.push_back(getMaxWithinRegoin(vec, j, i));
    return answer;
}
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

        vector<int> ans, _vec(a, 0);
        for (int i = 0; i < a; i++)
            cin >> _vec[i];

        ans = getAns(_vec);
        for (int i = 0; i < int(ans.size()); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}