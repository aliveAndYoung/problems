#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maxLessN = 0;
    cin >> n;
    vector<int> heights(1000, 1002);
    for (int i = 1; i <= n; i++)
        cin >> heights[i];
    for (int w = 1; w <= n; w++)
    {
        int max1 = 1, left = w, right = w;
        while (heights[left - 1] <= heights[left] && left > 0)
        {
            max1++;
            left--;
        }
        while (heights[right + 1] <= heights[right] && right < n + 1)
        {
            max1++;
            right++;
        }
        maxLessN = maxLessN >= max1 ? maxLessN : max1;
    }
    cout << maxLessN;

    return 0;
}