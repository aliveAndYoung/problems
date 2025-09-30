// by LIFECOULDBEDREAM
// 2025/09/30 22:18

#include <bits/stdc++.h>
using namespace std;

int getAns(vector<int> _a)
{
    int count = _a.size();
    for (int i = 0; i < _a.size() - 1; i++)
    {
        for (int j = i + 1; j < _a.size(); j++)
        {
            if (_a[j] >= _a[j - 1])
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
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
        int a;
        cin >> a;
        vector<int> arr(a, 0);
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        cout << getAns(arr) << "\n";
    }

    return 0;
}