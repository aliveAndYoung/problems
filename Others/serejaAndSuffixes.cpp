#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> frequencies(100002, 0);
    vector<int> prefixes(100002, 0);
    vector<int> nums(100002, 0);
    int maxDistinct = 0;

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int curr;
        cin >> curr;
        if (!frequencies[curr])
            maxDistinct++;
        frequencies[curr]++;
        nums[i + 1] = curr;
    }

    for (int t = 0; t < 100002; t++)
    {
        prefixes[t] = maxDistinct > 0 ? maxDistinct : 0;
        if (frequencies[nums[t]] == 1)
        {
            maxDistinct = maxDistinct - 1;
        }
        frequencies[nums[t]] = frequencies[nums[t]] - 1;
    }

    for (int r = 0; r < M; r++)
    {
        int currQuery;
        cin >> currQuery;
        cout << prefixes[currQuery] << "\n";
    }
    return 0;
}
