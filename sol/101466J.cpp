#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<ll> nums(n + 2, 0);
    for (int i = 1; i <= m; i++)
        cin >> nums[i];
    vector<int> questions(q, 0);
    for (int i = 0; i < q; i++)
        cin >> questions[i];

    for (int i = m + 1; i <= n; i++)
        nums[i] = (nums[i - m] + nums[i - m + 1]) % ll(3 * 1e7);
    vector<int> sorted(3 * 1e7 + 2, 0);
    for (int i = 1; i <= n; i++)
        sorted[nums[i]]++;
    for (int i = 1; i <= 1 + (3 * 1e7); i++)
        sorted[i] += sorted[i - 1];

    for (int question : questions)
    {
        auto iter = lower_bound(sorted.begin(), sorted.end(), question);
        int index = distance(sorted.begin(), iter);

        cout << index << " \n";
    }
}